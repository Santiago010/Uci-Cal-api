/** @file ScanPlaneEnum.h
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

#ifndef UCI_TYPE_SCANPLANEENUM_H
#define UCI_TYPE_SCANPLANEENUM_H

#include <map>
#include <sstream>

#include "../base/Accessor.h"
#include "../base/export.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Indicates the scan plane of a scanning emitter. */
class ScanPlaneEnum : public virtual uci::base::Accessor {
public:

  /** The following are the enumerated items that comprise this enumeration */
  enum EnumerationItem {

    /** Enumerated item that indicates that the enumeration has not been set */
    enumNotSet,

    /** Indicates the primary emitter antenna scan plane of the Signal is horizontal, scanning in azimuth. */
    UCI_AZIMUTH,

    /** Indicates the primary emitter antenna scan plane of the Signal is vertical, scanning in elevation. */
    UCI_ELEVATION,

    /** Enumerated item that indicates maximum enumerated item exclusive of this item */
    enumMaxExclusive
  };

  /** Returns this accessor's type constant, i.e. scanPlaneEnum.
    *
    * @return This accessor's type constant, i.e. scanPlaneEnum.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::scanPlaneEnum;
  }

  /** The assignment operator. Sets the contents of this ScanPlaneEnum to the contents of the ScanPlaneEnum on the right
    * hand side (rhs) of the assignment operator.
    *
    * @param rhs The ScanPlaneEnum on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this ScanPlaneEnum.
    * @return A reference to this ScanPlaneEnum.
    */
  ScanPlaneEnum& operator=(const ScanPlaneEnum& rhs) {
    setValue(rhs.getValue());
    return *this;
  }

  /** The assignment operator that sets the value of this ScanPlaneEnum enumeration to the EnumerationItem on the right
    * hand side of the assignment operator.
    *
    * @param rhs The EnumerationItem whose value is to be assigned to this ScanPlaneEnum enumeration.
    * @return A reference to this ScanPlaneEnum enumeration.
    */
  ScanPlaneEnum& operator=(EnumerationItem rhs) {
    setValue(rhs);
    return *this;
  }

  /** Sets the value of this ScanPlaneEnum enumeration to the value of the specified enumeration item.
    *
    * @param item The EnumerationItem whose value is to be used to set the value of this ScanPlaneEnum enumeration.
    */
  virtual void setValue(EnumerationItem item) = 0;

  /** Returns the value of this ScanPlaneEnum enumeration.
    *
    * @param testForValidity=true Specifies whether this ScanPlaneEnum enumeration should be validated (true) or not
    *      (false) as part of retrieving its value.
    * @return The value of this ScanPlaneEnum enumeration.
    */
  virtual EnumerationItem getValue(bool testForValidity=true) const = 0;

  /** Returns the number of items in this ScanPlaneEnum enumeration.
    *
    * @return The number of items in this ScanPlaneEnum enumeration.
    */
  int getNumberOfItems() const noexception {
    return 2;
  }

  /** Returns whether this ScanPlaneEnum enumeration is valid or not. A ScanPlaneEnum enumeration is valid if its value is
    * one of the enumeration items other than enumNotSet and enumMaxExclusive.
    *
    * @return A flag indicating whether this ScanPlaneEnum enumeration is valid (true) or not (false).
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

  /** Tests whether the value of the ScanPlaneEnum enumeration on the right hand side of the == operator is equal to the
    * value as this ScanPlaneEnum enumeration.
    *
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of this ScanPlaneEnum
    *      enumeration.
    * @return True if the value of the specified ScanPlaneEnum enumeration (rhs) is equal to the value of this
    *      ScanPlaneEnum enumeration, false otherwise.
    */
  bool operator==(const ScanPlaneEnum& rhs) const {
    return getValue() == rhs.getValue();
  }

  /** Tests whether the value of the ScanPlaneEnum enumeration on the right hand side of the != operator is not equal to
    * the value as this ScanPlaneEnum enumeration.
    *
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of this ScanPlaneEnum
    *      enumeration.
    * @return True if the value of the specified ScanPlaneEnum enumeration (rhs) is not equal to the value of this
    *      ScanPlaneEnum enumeration, false otherwise.
    */
  bool operator!=(const ScanPlaneEnum& rhs) const {
    return getValue() != rhs.getValue();
  }

  /** Tests whether the value of the ScanPlaneEnum enumeration on the right hand side of the < operator is less than the
    * value as this ScanPlaneEnum enumeration.
    *
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of this ScanPlaneEnum
    *      enumeration.
    * @return True if the value of the specified ScanPlaneEnum enumeration (rhs) is less than the value of this
    *      ScanPlaneEnum enumeration, false otherwise.
    */
  bool operator<(const ScanPlaneEnum& rhs) const {
    return getValue() < rhs.getValue();
  }

  /** Tests whether the value of the ScanPlaneEnum enumeration on the right hand side of the <= operator is less than or
    * equal to the value as this ScanPlaneEnum enumeration.
    *
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of this ScanPlaneEnum
    *      enumeration.
    * @return True if the value of the specified ScanPlaneEnum enumeration (rhs) is less than or equal to the value of this
    *      ScanPlaneEnum enumeration, false otherwise.
    */
  bool operator<=(const ScanPlaneEnum& rhs) const {
    return getValue() <= rhs.getValue();
  }

  /** Tests whether the value of the ScanPlaneEnum enumeration on the right hand side of the > operator is greater than the
    * value as this ScanPlaneEnum enumeration.
    *
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of this ScanPlaneEnum
    *      enumeration.
    * @return True if the value of the specified ScanPlaneEnum enumeration (rhs) is greater than the value of this
    *      ScanPlaneEnum enumeration, false otherwise.
    */
  bool operator>(const ScanPlaneEnum& rhs) const {
    return getValue() > rhs.getValue();
  }

  /** Tests whether the value of the ScanPlaneEnum enumeration on the right hand side of the >= operator is greater than or
    * equal to the value as this ScanPlaneEnum enumeration.
    *
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of this ScanPlaneEnum
    *      enumeration.
    * @return True if the value of the specified ScanPlaneEnum enumeration (rhs) is greater than or equal to the value of
    *      this ScanPlaneEnum enumeration, false otherwise.
    */
  bool operator>=(const ScanPlaneEnum& rhs) const {
    return getValue() >= rhs.getValue();
  }

  /** Tests whether the value of this ScanPlaneEnum enumeration is equal to the value of the specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this ScanPlaneEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is equal to the value of this ScanPlaneEnum enumeration, false
    *      otherwise.
    */
  bool operator==(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() == rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is equal to the value of the specified ScanPlaneEnum
    * enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified ScanPlaneEnum
    *      enumeration.
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is equal to the value of the ScanPlaneEnum enumeration (rhs),
    *      false otherwise.
    */
  friend bool operator==(EnumerationItem lhs, const ScanPlaneEnum& rhs) {
    testForValidItem(lhs);
    return lhs == rhs.getValue();
  }

  /** Tests whether the value of this ScanPlaneEnum enumeration is not equal to the value of the specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this ScanPlaneEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is not equal to the value of this ScanPlaneEnum enumeration,
    *      false otherwise.
    */
  bool operator!=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() != rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is not equal to the value of the specified ScanPlaneEnum
    * enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified ScanPlaneEnum
    *      enumeration.
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is not equal to the value of the ScanPlaneEnum enumeration
    *      (rhs), false otherwise.
    */
  friend bool operator!=(EnumerationItem lhs, const ScanPlaneEnum& rhs) {
    testForValidItem(lhs);
    return lhs != rhs.getValue();
  }

  /** Tests whether the value of this ScanPlaneEnum enumeration is less than the value of the specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this ScanPlaneEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is less than the value of this ScanPlaneEnum enumeration,
    *      false otherwise.
    */
  bool operator<(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() < rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is less than the value of the specified ScanPlaneEnum
    * enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified ScanPlaneEnum
    *      enumeration.
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is less than the value of the ScanPlaneEnum enumeration (rhs),
    *      false otherwise.
    */
  friend bool operator<(EnumerationItem lhs, const ScanPlaneEnum& rhs) {
    testForValidItem(lhs);
    return lhs < rhs.getValue();
  }

  /** Tests whether the value of this ScanPlaneEnum enumeration is less than or equal to the value of the specified
    * EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this ScanPlaneEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is less than or equal to the value of this ScanPlaneEnum
    *      enumeration, false otherwise.
    */
  bool operator<=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() <= rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is less than or equal to the value of the specified
    * ScanPlaneEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified ScanPlaneEnum
    *      enumeration.
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is less than or equal to the value of the ScanPlaneEnum
    *      enumeration (rhs), false otherwise.
    */
  friend bool operator<=(EnumerationItem lhs, const ScanPlaneEnum& rhs) {
    testForValidItem(lhs);
    return lhs <= rhs.getValue();
  }

  /** Tests whether the value of this ScanPlaneEnum enumeration is greater than the value of the specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this ScanPlaneEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is greater than the value of this ScanPlaneEnum enumeration,
    *      false otherwise.
    */
  bool operator>(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() > rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is greater than the value of the specified ScanPlaneEnum
    * enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified ScanPlaneEnum
    *      enumeration.
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is greater than the value of the ScanPlaneEnum enumeration
    *      (rhs), false otherwise.
    */
  friend bool operator>(EnumerationItem lhs, const ScanPlaneEnum& rhs) {
    testForValidItem(lhs);
    return lhs > rhs.getValue();
  }

  /** Tests whether the value of this ScanPlaneEnum enumeration is greater than or equal to the value of the specified
    * EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this ScanPlaneEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is greater than or equal to the value of this ScanPlaneEnum
    *      enumeration, false otherwise.
    */
  bool operator>=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() >= rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is greater than or equal to the value of the specified
    * ScanPlaneEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified ScanPlaneEnum
    *      enumeration.
    * @param rhs The ScanPlaneEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is greater than or equal to the value of the ScanPlaneEnum
    *      enumeration (rhs), false otherwise.
    */
  friend bool operator>=(EnumerationItem lhs, const ScanPlaneEnum& rhs) {
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

  /** Return the name of the enumeration item that the value of this ScanPlaneEnum enumeration is set to.
    *
    * @return The name of the enumeration item.
    */
  virtual std::string toName() const {
    return toName(getValue());
  }

  /** Sets the value of this ScanPlaneEnum enumeration to the value of the enumeration item having the specified name.
    *
    * @param itemName The name of the enumeration item whose value is to be used to set this ScanPlaneEnum enumeration to.
    */
  virtual void setValueFromName(const std::string& itemName) {
    setValue(fromName(itemName));
  }

protected:

  /** The default constructor. In addition to constructing a new ScanPlaneEnum, this constructor also makes sure the
    * conversion tables are initialized.
    */
  ScanPlaneEnum() {
  }

  /** The destructor [only available to derived classes]. */
  ~ScanPlaneEnum() {
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
    * @param rhs The ScanPlaneEnum to copy from.
    */
  ScanPlaneEnum(const ScanPlaneEnum& rhs) {
    (void)rhs;
  }

};

} // namespace type
} // namespace uci

template<typename charT, typename traits>
std::basic_ostream<charT, traits>&
operator<<(std::basic_ostream<charT, traits>& oStream, const uci::type::ScanPlaneEnum& enumeration)
{
  oStream << enumeration.toName();
  return oStream;
}

#endif // UCI_TYPE_SCANPLANEENUM_H

