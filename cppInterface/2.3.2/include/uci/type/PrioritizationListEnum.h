/** @file PrioritizationListEnum.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:09 PM
 *
 * <pre>
 * Unclassified               U N C L A S S I F I E D               Unclassified
 *
 * DISTRIBUTION STATEMENT D: Distribution authorized to Department of Defense
 *    and U.S. DoD contractors only, Critical Technology, Export Controlled,
 *    26 January 2023. Other requests for this document shall be referred to
 *    AFLCMC/XA (OAMO), Wright-Patterson AFB OH 45433.
 *
 * DESTRUCTION NOTICE: Destroy by any method that will prevent disclosure of
 *    contents or reconstruction of the document.
 *
 * WARNING - This document contains technical data whose export is restricted
 *    by the Arms Export Control Act (Section 2751 of Title 22, United States
 *    Code) or the Export Control Reform Act of 2018 (Chapter 58 Sections
 *    4801-4852 of Title 50, United States Code). Violations of these export
 *    laws are subject to severe criminal penalties. Disseminate in accordance
 *    with provisions of DoD Directive 5230.25 and DoD Instruction 2040.02.
 *
 * Controlled by: USAF
 * Controlled by: AFLCMC/XA (OAMO)
 * CUI Category(ies): CTI, EXPT
 * Distribution Statement D
 * POC: Wayne Artuso, 937-713-5124
 *
 * CUI//SP-CTI/SP-EXPT
 * </pre>
 *
 */

#ifndef UCI_TYPE_PRIORITIZATIONLISTENUM_H
#define UCI_TYPE_PRIORITIZATIONLISTENUM_H

#include <map>
#include <sstream>

#include "../base/Accessor.h"
#include "../base/export.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Indicates the different top-level lists this message supports. */
class PrioritizationListEnum : public virtual uci::base::Accessor {
public:

  /** The following are the enumerated items that comprise this enumeration */
  enum EnumerationItem {

    /** Enumerated item that indicates that the enumeration has not been set */
    enumNotSet,

    /** A prioritized list of battlespace objects or areas that are prioritized by an operational or tactical planner. For
      * planning purposes, the ListItem associated with this enumeration could include, for example, an entity, a signal, a
      * point or region.
      */
    UCI_THREAT_TARGET_PRIORITIZATION_LIST,

    /** A prioritized list of battlespace objects or areas that are prioritized by the joint force commander to be defended
      * with the resources available. Critical assets are generally specific assets of such extraordinary importance that
      * their loss or degradation would have a significant and debilitating effect on operations or the mission. For planning
      * purposes, the ListItem associated with this enumeration could typically be, for example, an entity, a system or a
      * point.
      */
    UCI_CRITICAL_ASSET_LIST,

    /** The Joint Integrated Prioritization Target List (JPITL) is a prioritized list of targets and associated data approved
      * by the Joint Forces Commander or designated representative. An approved JIPTL is the central product of the target
      * development cycle. For planning purposes, the ListItem associated with this enumeration could typically be, for
      * example, an entity or a system.
      */
    UCI_JIPTL,

    /** A product of the target development phase is the JPITL nomination list. Targeteers determine this list during the
      * objectives, effects, and guidance phase and analyze which targets should be struck (or otherwise affected) to
      * accomplish them. For planning purposes, the ListItem associated with this enumeration could typically be, for
      * example, an entity or a system.
      */
    UCI_JIPTL_NOMINATION,

    /** A consolidated list of selected targets considered to have military significance in the combatant commander's area of
      * responsibility. For planning purposes, the ListItem associated with this enumeration could typically be, for example,
      * an entity, a system, a point, or area.
      */
    UCI_JOINT_TARGET_LIST,

    /** The list of battlespace targets that are considered to have military significance and are required for the successful
      * completion of the mission. For planning purposes, the ListItem associated with this enumeration could typically be,
      * for example, an entity, a system, a point, or area.
      */
    UCI_MISSION_TARGET_LIST,

    /** A list of battlespace objects characterized as protected from the effects of military operations under international
      * law or Rules of Engagement (ROE). Attacking these may violate Law of Armed Conflict (LOAC) or ROE or interfere with
      * friendly relations with indigenous personnel or governments. For planning purposes, the ListItem associated with this
      * enumeration could typically be, for example, an entity, a system, a point, or area.
      */
    UCI_NO_STRIKE_LIST,

    /** A list of targets that have specific restrictions imposed upon them. Actions on restricted targets are prohibited
      * until coordinated and approved by the establishing authority. Targets are restricted because certain types of actions
      * against them may have negative political, cultural, or propaganda implications, or may interfere with projected
      * friendly operations. The Restricted Target List (RTL) is nominated by elements of the joint force and approved by the
      * JFC. Targets on this list may only be struck with JFC or higher approval. Actions taken by an opponent may remove a
      * target from the RTL. For planning purposes, the ListItem associated with this enumeration could typically be, for
      * example, an entity, a system, a point, or area.
      */
    UCI_RESTRICTED_TARGET_LIST,

    /** The Defended Asset List (DAL) is a listing of those assets from the critical asset list prioritized by the joint
      * force commander to be defended with the resources available. Critical assets that are reinforced with additional
      * protection capabilities or capabilities from other combat power elements become part of the DAL. It represents what
      * can be protected, by priority. The DAL allows commanders to apply finite protection capabilities to the most valuable
      * assets.
      */
    UCI_DEFENDED_ASSET_LIST,

    /** Enumerated item that indicates maximum enumerated item exclusive of this item */
    enumMaxExclusive
  };

  /** Returns this accessor's type constant, i.e. prioritizationListEnum.
    *
    * @return This accessor's type constant, i.e. prioritizationListEnum.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::prioritizationListEnum;
  }

  /** The assignment operator. Sets the contents of this PrioritizationListEnum to the contents of the
    * PrioritizationListEnum on the right hand side (rhs) of the assignment operator.
    *
    * @param rhs The PrioritizationListEnum on the right hand side (rhs) of the assignment operator whose contents are used
    *      to set the contents of this PrioritizationListEnum.
    * @return A reference to this PrioritizationListEnum.
    */
  PrioritizationListEnum& operator=(const PrioritizationListEnum& rhs) {
    setValue(rhs.getValue());
    return *this;
  }

  /** The assignment operator that sets the value of this PrioritizationListEnum enumeration to the EnumerationItem on the
    * right hand side of the assignment operator.
    *
    * @param rhs The EnumerationItem whose value is to be assigned to this PrioritizationListEnum enumeration.
    * @return A reference to this PrioritizationListEnum enumeration.
    */
  PrioritizationListEnum& operator=(EnumerationItem rhs) {
    setValue(rhs);
    return *this;
  }

  /** Sets the value of this PrioritizationListEnum enumeration to the value of the specified enumeration item.
    *
    * @param item The EnumerationItem whose value is to be used to set the value of this PrioritizationListEnum
    *      enumeration.
    */
  virtual void setValue(EnumerationItem item) = 0;

  /** Returns the value of this PrioritizationListEnum enumeration.
    *
    * @param testForValidity=true Specifies whether this PrioritizationListEnum enumeration should be validated (true) or
    *      not (false) as part of retrieving its value.
    * @return The value of this PrioritizationListEnum enumeration.
    */
  virtual EnumerationItem getValue(bool testForValidity=true) const = 0;

  /** Returns the number of items in this PrioritizationListEnum enumeration.
    *
    * @return The number of items in this PrioritizationListEnum enumeration.
    */
  int getNumberOfItems() const noexception {
    return 9;
  }

  /** Returns whether this PrioritizationListEnum enumeration is valid or not. A PrioritizationListEnum enumeration is
    * valid if its value is one of the enumeration items other than enumNotSet and enumMaxExclusive.
    *
    * @return A flag indicating whether this PrioritizationListEnum enumeration is valid (true) or not (false).
    */
  virtual bool isValid() const noexception {
    return isValid(getValue(false));
  }

  /** Returns whether the specified enumeration item is valid or not. A enumeration item is valid if its value is one of
    * the enumeration items other than enumNotSet and enumMaxExclusive.
    *
    * @param item The EnumerationItem to test.
    * @return A flag indicating whether the specified EnumerationItem is valid (true) or not (false).
    */
  static bool isValid(EnumerationItem item) noexception {
    return (item > enumNotSet) && (item < enumMaxExclusive);
  }

  /** Returns whether the specified name item is valid or not. A name is valid if it is the name of one of the enumeration
    * items other than enumNotSet and enumMaxExclusive.
    *
    * @param name The name to test.
    * @return A flag indicating whether the specified name is valid (true) or not (false).
    */
  static bool isValid(const std::string& name) noexception {
    FromNameTable::const_iterator iter = m_fromNameTable.find(name);
    return !(iter == m_fromNameTable.end());
  }

  /** Tests whether the value of the PrioritizationListEnum enumeration on the right hand side of the == operator is equal
    * to the value as this PrioritizationListEnum enumeration.
    *
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of this
    *      PrioritizationListEnum enumeration.
    * @return True if the value of the specified PrioritizationListEnum enumeration (rhs) is equal to the value of this
    *      PrioritizationListEnum enumeration, false otherwise.
    */
  bool operator==(const PrioritizationListEnum& rhs) const {
    return getValue() == rhs.getValue();
  }

  /** Tests whether the value of the PrioritizationListEnum enumeration on the right hand side of the != operator is not
    * equal to the value as this PrioritizationListEnum enumeration.
    *
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of this
    *      PrioritizationListEnum enumeration.
    * @return True if the value of the specified PrioritizationListEnum enumeration (rhs) is not equal to the value of this
    *      PrioritizationListEnum enumeration, false otherwise.
    */
  bool operator!=(const PrioritizationListEnum& rhs) const {
    return getValue() != rhs.getValue();
  }

  /** Tests whether the value of the PrioritizationListEnum enumeration on the right hand side of the < operator is less
    * than the value as this PrioritizationListEnum enumeration.
    *
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of this
    *      PrioritizationListEnum enumeration.
    * @return True if the value of the specified PrioritizationListEnum enumeration (rhs) is less than the value of this
    *      PrioritizationListEnum enumeration, false otherwise.
    */
  bool operator<(const PrioritizationListEnum& rhs) const {
    return getValue() < rhs.getValue();
  }

  /** Tests whether the value of the PrioritizationListEnum enumeration on the right hand side of the <= operator is less
    * than or equal to the value as this PrioritizationListEnum enumeration.
    *
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of this
    *      PrioritizationListEnum enumeration.
    * @return True if the value of the specified PrioritizationListEnum enumeration (rhs) is less than or equal to the
    *      value of this PrioritizationListEnum enumeration, false otherwise.
    */
  bool operator<=(const PrioritizationListEnum& rhs) const {
    return getValue() <= rhs.getValue();
  }

  /** Tests whether the value of the PrioritizationListEnum enumeration on the right hand side of the > operator is greater
    * than the value as this PrioritizationListEnum enumeration.
    *
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of this
    *      PrioritizationListEnum enumeration.
    * @return True if the value of the specified PrioritizationListEnum enumeration (rhs) is greater than the value of this
    *      PrioritizationListEnum enumeration, false otherwise.
    */
  bool operator>(const PrioritizationListEnum& rhs) const {
    return getValue() > rhs.getValue();
  }

  /** Tests whether the value of the PrioritizationListEnum enumeration on the right hand side of the >= operator is
    * greater than or equal to the value as this PrioritizationListEnum enumeration.
    *
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of this
    *      PrioritizationListEnum enumeration.
    * @return True if the value of the specified PrioritizationListEnum enumeration (rhs) is greater than or equal to the
    *      value of this PrioritizationListEnum enumeration, false otherwise.
    */
  bool operator>=(const PrioritizationListEnum& rhs) const {
    return getValue() >= rhs.getValue();
  }

  /** Tests whether the value of this PrioritizationListEnum enumeration is equal to the value of the specified
    * EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this PrioritizationListEnum
    *      enumeration.
    * @return True if the value of the EnumerationItem (rhs) is equal to the value of this PrioritizationListEnum
    *      enumeration, false otherwise.
    */
  bool operator==(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() == rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is equal to the value of the specified
    * PrioritizationListEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      PrioritizationListEnum enumeration.
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is equal to the value of the PrioritizationListEnum
    *      enumeration (rhs), false otherwise.
    */
  friend bool operator==(EnumerationItem lhs, const PrioritizationListEnum& rhs) {
    testForValidItem(lhs);
    return lhs == rhs.getValue();
  }

  /** Tests whether the value of this PrioritizationListEnum enumeration is not equal to the value of the specified
    * EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this PrioritizationListEnum
    *      enumeration.
    * @return True if the value of the EnumerationItem (rhs) is not equal to the value of this PrioritizationListEnum
    *      enumeration, false otherwise.
    */
  bool operator!=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() != rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is not equal to the value of the specified
    * PrioritizationListEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      PrioritizationListEnum enumeration.
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is not equal to the value of the PrioritizationListEnum
    *      enumeration (rhs), false otherwise.
    */
  friend bool operator!=(EnumerationItem lhs, const PrioritizationListEnum& rhs) {
    testForValidItem(lhs);
    return lhs != rhs.getValue();
  }

  /** Tests whether the value of this PrioritizationListEnum enumeration is less than the value of the specified
    * EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this PrioritizationListEnum
    *      enumeration.
    * @return True if the value of the EnumerationItem (rhs) is less than the value of this PrioritizationListEnum
    *      enumeration, false otherwise.
    */
  bool operator<(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() < rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is less than the value of the specified
    * PrioritizationListEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      PrioritizationListEnum enumeration.
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is less than the value of the PrioritizationListEnum
    *      enumeration (rhs), false otherwise.
    */
  friend bool operator<(EnumerationItem lhs, const PrioritizationListEnum& rhs) {
    testForValidItem(lhs);
    return lhs < rhs.getValue();
  }

  /** Tests whether the value of this PrioritizationListEnum enumeration is less than or equal to the value of the
    * specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this PrioritizationListEnum
    *      enumeration.
    * @return True if the value of the EnumerationItem (rhs) is less than or equal to the value of this
    *      PrioritizationListEnum enumeration, false otherwise.
    */
  bool operator<=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() <= rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is less than or equal to the value of the specified
    * PrioritizationListEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      PrioritizationListEnum enumeration.
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is less than or equal to the value of the
    *      PrioritizationListEnum enumeration (rhs), false otherwise.
    */
  friend bool operator<=(EnumerationItem lhs, const PrioritizationListEnum& rhs) {
    testForValidItem(lhs);
    return lhs <= rhs.getValue();
  }

  /** Tests whether the value of this PrioritizationListEnum enumeration is greater than the value of the specified
    * EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this PrioritizationListEnum
    *      enumeration.
    * @return True if the value of the EnumerationItem (rhs) is greater than the value of this PrioritizationListEnum
    *      enumeration, false otherwise.
    */
  bool operator>(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() > rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is greater than the value of the specified
    * PrioritizationListEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      PrioritizationListEnum enumeration.
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is greater than the value of the PrioritizationListEnum
    *      enumeration (rhs), false otherwise.
    */
  friend bool operator>(EnumerationItem lhs, const PrioritizationListEnum& rhs) {
    testForValidItem(lhs);
    return lhs > rhs.getValue();
  }

  /** Tests whether the value of this PrioritizationListEnum enumeration is greater than or equal to the value of the
    * specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this PrioritizationListEnum
    *      enumeration.
    * @return True if the value of the EnumerationItem (rhs) is greater than or equal to the value of this
    *      PrioritizationListEnum enumeration, false otherwise.
    */
  bool operator>=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() >= rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is greater than or equal to the value of the specified
    * PrioritizationListEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified
    *      PrioritizationListEnum enumeration.
    * @param rhs The PrioritizationListEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is greater than or equal to the value of the
    *      PrioritizationListEnum enumeration (rhs), false otherwise.
    */
  friend bool operator>=(EnumerationItem lhs, const PrioritizationListEnum& rhs) {
    testForValidItem(lhs);
    return lhs >= rhs.getValue();
  }

  /** Returns the name of the specified enumeration item.
    *
    * @param item The enumeration item whose name is to be returned.
    * @return The enumeration item's name if valid.
    */
  static std::string toName(EnumerationItem item) {
    ToNameTable::const_iterator iter = m_toNameTable.find(item);
    if (iter == m_toNameTable.end()) {
      std::ostringstream oStream;
      oStream << "Failed to convert enumerated item to its name, item not found in mapping: " << item;
      throw uci::base::UCIException(oStream.str(), 0);
    }

    return iter->second;
  }

  /** Returns the enumeration item having the specified name.
    *
    * @param itemName The name of the enumeration item to be returned.
    * @return The enumeration item having the specified name.
    */
  static EnumerationItem fromName(const std::string& itemName) {
    FromNameTable::const_iterator iter = m_fromNameTable.find(itemName);
    if (iter == m_fromNameTable.end()) {
      std::ostringstream oStream;
      oStream << "Failed to return enumerated item having specified name, name not found in mapping: " << itemName;
      throw uci::base::UCIException(oStream.str(), 0);
    }

    return iter->second;
  }

  /** Return the name of the enumeration item that the value of this PrioritizationListEnum enumeration is set to.
    *
    * @return The name of the enumeration item.
    */
  virtual std::string toName() const {
    return toName(getValue());
  }

  /** Sets the value of this PrioritizationListEnum enumeration to the value of the enumeration item having the specified
    * name.
    *
    * @param itemName The name of the enumeration item whose value is to be used to set this PrioritizationListEnum
    *      enumeration to.
    */
  virtual void setValueFromName(const std::string& itemName) {
    setValue(fromName(itemName));
  }

protected:

  /** The default constructor. In addition to constructing a new PrioritizationListEnum, this constructor also makes sure
    * the conversion tables are initialized.
    */
  PrioritizationListEnum() {
  }

  /** The destructor [only available to derived classes]. */
  ~PrioritizationListEnum() {
  }

  /** Tests that the specified enumeration item is valid or not, throwing an exception if the item is not valid.
    *
    * @param additionalDescription An additional description to include in the error message should an exception be thrown.
    * @param item The enumeration item to test.
    */
  static void testForValidItem(const char* additionalDescription, EnumerationItem item) {
    if (!isValid(item)) {
      std::ostringstream oStream;
      oStream << additionalDescription << ": " << item << " (item must be between " << enumNotSet << " and "<< enumMaxExclusive << " exclusive)";
      throw uci::base::UCIException(oStream.str(), 0);
    }

  }

  /** Tests that the specified enumeration item is valid or not, throwing an exception if the item is not valid.
    *
    * @param item The enumeration item to test.
    */
  static void testForValidItem(EnumerationItem item) {
    testForValidItem("Invalid enumerated item specified", item);
  }

private:

  /** The type of table that is used to lookup the name of a enumeration item given that enumeration item. */
  typedef std::map<EnumerationItem, const std::string> ToNameTable;

  /** The type of table that is used to lookup an enumeration item given its name. */
  typedef std::map<const std::string, EnumerationItem> FromNameTable;

  /** The table that is used to lookup the name of a enumeration item given that enumeration item. */
  static UCI_EXPORT ToNameTable m_toNameTable;

  /** The type of table that is used to lookup an enumeration item given its name. */
  static UCI_EXPORT FromNameTable m_fromNameTable;

protected:

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The PrioritizationListEnum to copy from.
    */
  PrioritizationListEnum(const PrioritizationListEnum& rhs) {
    (void)rhs;
  }

};

} // namespace type
} // namespace uci

template<typename charT, typename traits>
std::basic_ostream<charT, traits>&
operator<<(std::basic_ostream<charT, traits>& oStream, const uci::type::PrioritizationListEnum& enumeration)
{
  oStream << enumeration.toName();
  return oStream;
}

#endif // UCI_TYPE_PRIORITIZATIONLISTENUM_H

