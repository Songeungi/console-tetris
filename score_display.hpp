#ifndef SCORE_DISPLAY
#define SCORE_DISPLAY

/* Number Patterns */
const int NUMBER_COUNT = 10;
const int LINE_COUNT = 3;
const wchar_t* number_pattern[NUMBER_COUNT][LINE_COUNT] = {
	/* 0 */
	{ L"\u2590\u259B\u2580\u259C\u258C",
		L"\u2590\u258C \u2590\u258C",
		L"\u2590\u2599\u2584\u259F\u258C" },
	/* 1 */
	{ L" \u259D\u2588  ",
		L"  \u2588  ",
		L" \u2597\u2588\u2596 " },
	/* 2 */
	{ L"\u259D\u2580\u2580\u259C\u258C",
		L"\u2590\u259B\u2580\u2580\u2598",
		L"\u2590\u2599\u2584\u2584\u2596" },
	/* 3 */
	{ L"\u259D\u2580\u2580\u259C\u258C",
		L"  \u2580\u259C\u258C",
		L"\u2597\u2584\u2584\u259F\u258C" },
	/* 4 */
	{ L"\u2590\u258C   ",
		L"\u2590\u2599\u2584\u259F\u258C",
		L"   \u2590\u258C" },
	/* 5 */
	{ L"\u2590\u259B\u2580\u2580\u2598",
		L"\u259D\u2580\u2580\u259C\u258C",
		L"\u2597\u2584\u2584\u259F\u258C" },
	/* 6 */
	{ L"\u2590\u259B\u2580\u2580\u2598",
		L"\u2590\u259B\u2580\u259C\u258C",
		L"\u2590\u2599\u2584\u259F\u258C" },
	/* 7 */
	{ L"\u259D\u2580\u2580\u2588\u258C",
		L"  \u259F\u259B ",
		L"  \u2588  " },
	/* 8 */
	{ L"\u2590\u259B\u2580\u259C\u258C",
		L"\u2590\u259B\u2580\u259C\u258C",
		L"\u2590\u2599\u2584\u259F\u258C" },
	/* 9 */
	{ L"\u2590\u259B\u2580\u259C\u258C",
		L"\u259D\u2580\u2580\u259C\u258C",
		L"\u2597\u2584\u2584\u259F\u258C" }
};

#endif /* SCORE_DISPLAY */

