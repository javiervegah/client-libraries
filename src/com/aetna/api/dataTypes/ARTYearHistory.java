package com.aetna.api.dataTypes;

import java.util.List;

public class ARTYearHistory {
	private String year;
	private ARTYearHistoryData data;

	public String getYear() {
		return year;
	}

	public void setYear(String year) {
		this.year = year;
	}

	public ARTYearHistoryData getData() {
		return data;
	}

	public void setData(ARTYearHistoryData data) {
		this.data = data;
	}

}