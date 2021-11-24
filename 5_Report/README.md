
# 1.Requirements

## INTRODUCTION 

A "CALENDAR" is a system of organizing days. This is done by giving names to periods of time, typically days, weeks, months and years. A date is the designation of a single, specific day within such a system. A calendar is also a physical record of such a system. A calendar is to be informed about or to agree on a future event and to record an event that has happened. Days may be significant for agricultural, civil, religious, or social reasons.

Calendars play an important role in our daily work to help us stay on task as well as be productive and prioritize. By using them to schedule our daily work we can avoid distractions and get back on track when interrupted.

## RESEARCH 

[Refer to this link](https://www.projectplan365.com/training/lesson-4-project-calendar/)

## COST AND FEATURES AND TIMELINE

![image](https://d3uigcfkiiww0g.cloudfront.net/wordpress/blog/pics-en/uploads/99-day-study-schedule-usmle-step-1.jpg)

## 1.Cost  

The schedule determines when work elements are to be completed, milestones achieved, and when the project should be completed.The budget determines how much each work element should cost, the cost of each level of the work breakdown schedule (WBS), and how much the total project should cost.
  
## 2.Feature

E-mail integration : an electronic mail communication system. This can be tied into the appointment calendar to send reminders and notify the participants of issues arising with scheduled meetings.

Calendar publishing : some calendaring tools allow the user to publish select calendar information on a public link.

Printing : User may print selected schedule. Usually, this feature allows users to select how she wants to have the printout to look (i.e. include comments, subject only, etc.).
   
## 3.Timeline

Started on 17th Nov 2021 and will be submitted on time of 24th Nov 2021.

## Defining Our System 

A Calender is a group of interacting or interrelated elements that act according to a set of rules to form a unified whole.The Gregorian calendar today serves as an international standard for civil use.Although a variety of other calendars are in use today, they are restricted to particular religions or cultures.

## SWOT ANALYSIS 

![image](https://pestleanalysis.com/wp-content/uploads/2014/01/swot-template.jpg)

STRENGTHS   
 
```sh
It keeps us accountable.. 
It keeps us realistic. When planning out tasks and activities on the calendar, be realistic. 
It helps us prioritize.
It keeps us on track.
It sets boundaries.
```
WEAKNESSESS    
 
```sh
Rigidity.
Misdirected Planning.
Time consuming.
Probability in planning.
False sense of security.
Expensive.
```
 
OPP0RTUNITIES 
 
A calendar of funding and research opportunities, internships, calls for papers, fellowships, prizes, and job postings that may be of interest to our students, faculty, and alums.
 
THREATS     

```sh
Data corruption is possible, altering or even deleing events.
Too many options can make simple event scheduling complicated.
On PDAs: batteries can fail, leaving you calendar-less.
Dependent on technology.
```

## 4W's and 1'H 

Who 

Calendar

What 

This is done by giving names/events to periods of time, typically days, weeks, months and years. 

When 

It is used at specific events/remainder (i.e., Birthday's, Anniversary, Interviews, Meetings etc.)

Where 

We can look at mobile phones, google , Desktops , Laptops with different different modules.

How 

By taking new modules with different updates with latest feature of remainder of events/work/meetings by adding a note.

## Detail requirements 

High Level Requirements 

| ID | Description | Status (Implemented/Future)
| -------- | --------- | -------- |
| Automation | A Calendars can use existing data to make smart suggestions. For example, if you have a monthly team meeting at a local coffee shop, you calendar can automatically suggest exactly when and where that meeting should take place. | Futute |
| Natural language processing | Artificial intelligence is the development of natural language processing.Calendars like Calendly, Doodle and ScheduleOnce are using using natural language so that you can quickly add and edit events. | Future |
| RSVP tracking and forwarding | Keeping tabs of your events is a key component of time management. But managing who is and isn’t attending can be time consuming. Thankfully most online calendars allow you to track responses and RSVPs. | Future |
| Multiple time zone support | . As technology continues to advance, and more companies see the benefit of remote workers, expect that figure to increase dramatically.The catch, however, is that with more people working virtually there’s a better chance that you’re working with someone in a different time zone. This way you can plan your event accordingly | Future |
| Integration with other applications | That means if you want to make life much easier you’ll want a calendar that integrates with your existing tools. If you used a scheduling app like Calendar then it should definitely sync with popular calendars like Google, Outlook Calendar, Office Calendar or Apple Calendar. | Future |

Low level Requirements 

| ID | Description | Status (Implemented/Future)
| -------- | -------- | -------- |
| The Schedule view | A Schedule view that can show you and your colleagues' calendars side-by-side. It works best with Google Workspace accounts in a company where everyone's calendars are shared. Add your coworkers' calendars from the left sidebar, then select the Day view from the menu in the top left of Google Calendar. | IMplemented |
| Schedule meeting rooms | Calendars are for time, but Google Calendar can also help you organize space. Or spaces, at least. Right beside the Guests tab where you add event attendees, there's an easy to miss Rooms tab, where you can search through your company's available meeting rooms, see what features they have, and add them to an event directly. | Implemented | 
|Track time with a world clock | Google Calendar's scheduling tools help you see when people are busy—but if you're working in different time zones, it might not be quite as obvious when they're sleeping. There's a new Google Calendar tool to help with that: a World Clock that you've likely already noticed in the screenshots. | Implemented |
|Weather is missing | One Google Calendar feature that disappeared in the past few years is weather forecasts. | Implemented |
| See more with a year view | Google Calendar has a year view. You probably didn't notice they added it, but they did. You can use it. Click the view menu in the top right and select Year to see the entire year at a glance. Dates with events aren't highlighted at all, but you can click on a date to see everything scheduled in a popover. Or double-click a date to open it in Day view. | Implemented |

Implementation

## Implementation Structure

Folder        | Description
--------------| ----------------------------------------------
`Inc`         | All header files
`Src`         | Main source code for calculator
`Test`        | All source code and data for testing purposes
`Build`       | Build output(not included in git)

TEST PLAN

## Table no: High level test plan

| **Test ID** | **Description** | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test** |    
|------|-------------|------------|-------------|----------------|------------------|
| H_01 | User wants to add an item to the calendar |Enter item/event | Saved successfully | Saved successfully |Requirement based |
| H_02 | User wants to include and invite an attendee to their calendar item. | Sent Invitation | Sent successfully | Sent successfully | Scenario based |
| H_03 | User wants to upload an attachment to their calendar item from desktop | Upload Attachment | Attached Successfully | Attached Successfully | Boundary based |

## Table no: Low level test plan

| **Test ID** | **Description** | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test** |    
|-------------|-----------------|------------|-------------|----------------|------------------|
| L_01 | User wants to make an amendment to their calendar item.| Amend calender | Amended successfully | Amended successfully | Requirement based |
| L_02 | User wants to cancel their calendar item.| To cancel the item | Cancelled successfully | Cancelled successfully | Scenario based |
| L_03 | User wants to share an online video meeting link to their invite.| Sharing online meet link | Shared successfully| Shared successfully | Boundary based |

M1_Application_Calender

A "CALENDAR" is a system of organizing days. This is done by giving names to periods of time, typically days, weeks, months and years. A date is the designation of a single, specific day within such a system. A calendar is also a physical record of such a system. A calendar is to be informed about or to agree on a future event and to record an event that has happened. Days may be significant for agricultural, civil, religious, or social reasons.

Calendars play an important role in our daily work to help us stay on task as well as be productive and prioritize. By using them to schedule our daily work we can avoid distractions and get back on track when interrupted.



CONCLUSION

A Calendar is very useful in our day to day life. we can add/notes events to remember that specific days like birthday's, Anniversaries, meetings, etc. We can get our past, present and future calendars with festivals.
