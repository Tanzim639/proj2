import asyncio

async def my_async_function():
    # asynchronous code here
    await asyncio.sleep(1)
    return "Hello, Async World!"

async def main():
    # result = await my_async_function()
    # print(result)


    #to make them run simultaneously
    L = await asyncio.gather(
            my_async_function(),
            my_async_function(),
            my_async_function(),
        )
    print(L)


asyncio.run(main())