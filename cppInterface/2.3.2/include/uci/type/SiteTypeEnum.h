/** @file SiteTypeEnum.h
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

#ifndef UCI_TYPE_SITETYPEENUM_H
#define UCI_TYPE_SITETYPEENUM_H

#include <map>
#include <sstream>

#include "../base/Accessor.h"
#include "../base/export.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Indicates the site type of a ground object. For example see MIL-STD-6016 DFI/DUI 1555/001. */
class SiteTypeEnum : public virtual uci::base::Accessor {
public:

  /** The following are the enumerated items that comprise this enumeration */
  enum EnumerationItem {

    /** Enumerated item that indicates that the enumeration has not been set */
    enumNotSet,

    /** No annotation will be provided. */
    UCI_NONE,

    /** No annotation will be provided. */
    UCI_ADOC,

    /** No annotation will be provided. */
    UCI_SOC,

    /** No annotation will be provided. */
    UCI_SOC_CRC,

    /** No annotation will be provided. */
    UCI_CRC,

    /** No annotation will be provided. */
    UCI_CRP,

    /** No annotation will be provided. */
    UCI_AEGIS,

    /** No annotation will be provided. */
    UCI_TACC_USAF,

    /** No annotation will be provided. */
    UCI_CRC_MCE,

    /** No annotation will be provided. */
    UCI_SSSB,

    /** No annotation will be provided. */
    UCI_HIMAD_BDE,

    /** No annotation will be provided. */
    UCI_HIMAD_BN,

    /** No annotation will be provided. */
    UCI_PATRIOT_BN_ICC,

    /** No annotation will be provided. */
    UCI_PATRIOT_ECS,

    /** No annotation will be provided. */
    UCI_HAWK_AFP,

    /** No annotation will be provided. */
    UCI_SHORAD_BDE,

    /** No annotation will be provided. */
    UCI_SHORAD_BN,

    /** No annotation will be provided. */
    UCI_SWC,

    /** No annotation will be provided. */
    UCI_TACC_USMC,

    /** No annotation will be provided. */
    UCI_TADC,

    /** No annotation will be provided. */
    UCI_TAOC,

    /** No annotation will be provided. */
    UCI_ROCC,

    /** No annotation will be provided. */
    UCI_RADIL,

    /** No annotation will be provided. */
    UCI_ASIT,

    /** No annotation will be provided. */
    UCI_GCI,

    /** No annotation will be provided. */
    UCI_MPC,

    /** No annotation will be provided. */
    UCI_TOC,

    /** No annotation will be provided. */
    UCI_DIVARTY,

    /** No annotation will be provided. */
    UCI_NIKE,

    /** No annotation will be provided. */
    UCI_GACC,

    /** No annotation will be provided. */
    UCI_PLSS,

    /** No annotation will be provided. */
    UCI_ENSCE,

    /** No annotation will be provided. */
    UCI_TGIF,

    /** No annotation will be provided. */
    UCI_FACP,

    /** No annotation will be provided. */
    UCI_TOC_THAAD,

    /** No annotation will be provided. */
    UCI_LCS_THAAD,

    /** No annotation will be provided. */
    UCI_SSI_THAAD,

    /** No annotation will be provided. */
    UCI_JTAGS,

    /** No annotation will be provided. */
    UCI_ADTOC_BN,

    /** No annotation will be provided. */
    UCI_ADTOC_BDE,

    /** No annotation will be provided. */
    UCI_ADCP,

    /** No annotation will be provided. */
    UCI_BM_DEFENSE_SITE,

    /** No annotation will be provided. */
    UCI_ME_SAMP_T,

    /** No annotation will be provided. */
    UCI_CAOC,

    /** No annotation will be provided. */
    UCI_DCAOC,

    /** No annotation will be provided. */
    UCI_ACC,

    /** No annotation will be provided. */
    UCI_RPC,

    /** No annotation will be provided. */
    UCI_ARS,

    /** No annotation will be provided. */
    UCI_DARS,

    /** No annotation will be provided. */
    UCI_CARS,

    /** No annotation will be provided. */
    UCI_AOCC_LAND,

    /** No annotation will be provided. */
    UCI_AOCC_MARITIME,

    /** No annotation will be provided. */
    UCI_WOC,

    /** No annotation will be provided. */
    UCI_SAMOC,

    /** No annotation will be provided. */
    UCI_SQOC,

    /** No annotation will be provided. */
    UCI_NASAMS_TOC,

    /** No annotation will be provided. */
    UCI_NASAMS_LCHR,

    /** No annotation will be provided. */
    UCI_NASAMS_ADR,

    /** No annotation will be provided. */
    UCI_SLAMRAAM,

    /** No annotation will be provided. */
    UCI_JLENS,

    /** Unmanned Air Vehicle Control Station. */
    UCI_UAV_CS,

    /** Enumerated item that indicates maximum enumerated item exclusive of this item */
    enumMaxExclusive
  };

  /** Returns this accessor's type constant, i.e. siteTypeEnum.
    *
    * @return This accessor's type constant, i.e. siteTypeEnum.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::siteTypeEnum;
  }

  /** The assignment operator. Sets the contents of this SiteTypeEnum to the contents of the SiteTypeEnum on the right hand
    * side (rhs) of the assignment operator.
    *
    * @param rhs The SiteTypeEnum on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this SiteTypeEnum.
    * @return A reference to this SiteTypeEnum.
    */
  SiteTypeEnum& operator=(const SiteTypeEnum& rhs) {
    setValue(rhs.getValue());
    return *this;
  }

  /** The assignment operator that sets the value of this SiteTypeEnum enumeration to the EnumerationItem on the right hand
    * side of the assignment operator.
    *
    * @param rhs The EnumerationItem whose value is to be assigned to this SiteTypeEnum enumeration.
    * @return A reference to this SiteTypeEnum enumeration.
    */
  SiteTypeEnum& operator=(EnumerationItem rhs) {
    setValue(rhs);
    return *this;
  }

  /** Sets the value of this SiteTypeEnum enumeration to the value of the specified enumeration item.
    *
    * @param item The EnumerationItem whose value is to be used to set the value of this SiteTypeEnum enumeration.
    */
  virtual void setValue(EnumerationItem item) = 0;

  /** Returns the value of this SiteTypeEnum enumeration.
    *
    * @param testForValidity=true Specifies whether this SiteTypeEnum enumeration should be validated (true) or not (false)
    *      as part of retrieving its value.
    * @return The value of this SiteTypeEnum enumeration.
    */
  virtual EnumerationItem getValue(bool testForValidity=true) const = 0;

  /** Returns the number of items in this SiteTypeEnum enumeration.
    *
    * @return The number of items in this SiteTypeEnum enumeration.
    */
  int getNumberOfItems() const noexception {
    return 61;
  }

  /** Returns whether this SiteTypeEnum enumeration is valid or not. A SiteTypeEnum enumeration is valid if its value is
    * one of the enumeration items other than enumNotSet and enumMaxExclusive.
    *
    * @return A flag indicating whether this SiteTypeEnum enumeration is valid (true) or not (false).
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

  /** Tests whether the value of the SiteTypeEnum enumeration on the right hand side of the == operator is equal to the
    * value as this SiteTypeEnum enumeration.
    *
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of this SiteTypeEnum
    *      enumeration.
    * @return True if the value of the specified SiteTypeEnum enumeration (rhs) is equal to the value of this SiteTypeEnum
    *      enumeration, false otherwise.
    */
  bool operator==(const SiteTypeEnum& rhs) const {
    return getValue() == rhs.getValue();
  }

  /** Tests whether the value of the SiteTypeEnum enumeration on the right hand side of the != operator is not equal to the
    * value as this SiteTypeEnum enumeration.
    *
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of this SiteTypeEnum
    *      enumeration.
    * @return True if the value of the specified SiteTypeEnum enumeration (rhs) is not equal to the value of this
    *      SiteTypeEnum enumeration, false otherwise.
    */
  bool operator!=(const SiteTypeEnum& rhs) const {
    return getValue() != rhs.getValue();
  }

  /** Tests whether the value of the SiteTypeEnum enumeration on the right hand side of the < operator is less than the
    * value as this SiteTypeEnum enumeration.
    *
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of this SiteTypeEnum
    *      enumeration.
    * @return True if the value of the specified SiteTypeEnum enumeration (rhs) is less than the value of this SiteTypeEnum
    *      enumeration, false otherwise.
    */
  bool operator<(const SiteTypeEnum& rhs) const {
    return getValue() < rhs.getValue();
  }

  /** Tests whether the value of the SiteTypeEnum enumeration on the right hand side of the <= operator is less than or
    * equal to the value as this SiteTypeEnum enumeration.
    *
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of this SiteTypeEnum
    *      enumeration.
    * @return True if the value of the specified SiteTypeEnum enumeration (rhs) is less than or equal to the value of this
    *      SiteTypeEnum enumeration, false otherwise.
    */
  bool operator<=(const SiteTypeEnum& rhs) const {
    return getValue() <= rhs.getValue();
  }

  /** Tests whether the value of the SiteTypeEnum enumeration on the right hand side of the > operator is greater than the
    * value as this SiteTypeEnum enumeration.
    *
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of this SiteTypeEnum
    *      enumeration.
    * @return True if the value of the specified SiteTypeEnum enumeration (rhs) is greater than the value of this
    *      SiteTypeEnum enumeration, false otherwise.
    */
  bool operator>(const SiteTypeEnum& rhs) const {
    return getValue() > rhs.getValue();
  }

  /** Tests whether the value of the SiteTypeEnum enumeration on the right hand side of the >= operator is greater than or
    * equal to the value as this SiteTypeEnum enumeration.
    *
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of this SiteTypeEnum
    *      enumeration.
    * @return True if the value of the specified SiteTypeEnum enumeration (rhs) is greater than or equal to the value of
    *      this SiteTypeEnum enumeration, false otherwise.
    */
  bool operator>=(const SiteTypeEnum& rhs) const {
    return getValue() >= rhs.getValue();
  }

  /** Tests whether the value of this SiteTypeEnum enumeration is equal to the value of the specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this SiteTypeEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is equal to the value of this SiteTypeEnum enumeration, false
    *      otherwise.
    */
  bool operator==(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() == rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is equal to the value of the specified SiteTypeEnum
    * enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified SiteTypeEnum
    *      enumeration.
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is equal to the value of the SiteTypeEnum enumeration (rhs),
    *      false otherwise.
    */
  friend bool operator==(EnumerationItem lhs, const SiteTypeEnum& rhs) {
    testForValidItem(lhs);
    return lhs == rhs.getValue();
  }

  /** Tests whether the value of this SiteTypeEnum enumeration is not equal to the value of the specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this SiteTypeEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is not equal to the value of this SiteTypeEnum enumeration,
    *      false otherwise.
    */
  bool operator!=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() != rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is not equal to the value of the specified SiteTypeEnum
    * enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified SiteTypeEnum
    *      enumeration.
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is not equal to the value of the SiteTypeEnum enumeration
    *      (rhs), false otherwise.
    */
  friend bool operator!=(EnumerationItem lhs, const SiteTypeEnum& rhs) {
    testForValidItem(lhs);
    return lhs != rhs.getValue();
  }

  /** Tests whether the value of this SiteTypeEnum enumeration is less than the value of the specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this SiteTypeEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is less than the value of this SiteTypeEnum enumeration, false
    *      otherwise.
    */
  bool operator<(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() < rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is less than the value of the specified SiteTypeEnum
    * enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified SiteTypeEnum
    *      enumeration.
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is less than the value of the SiteTypeEnum enumeration (rhs),
    *      false otherwise.
    */
  friend bool operator<(EnumerationItem lhs, const SiteTypeEnum& rhs) {
    testForValidItem(lhs);
    return lhs < rhs.getValue();
  }

  /** Tests whether the value of this SiteTypeEnum enumeration is less than or equal to the value of the specified
    * EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this SiteTypeEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is less than or equal to the value of this SiteTypeEnum
    *      enumeration, false otherwise.
    */
  bool operator<=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() <= rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is less than or equal to the value of the specified
    * SiteTypeEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified SiteTypeEnum
    *      enumeration.
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is less than or equal to the value of the SiteTypeEnum
    *      enumeration (rhs), false otherwise.
    */
  friend bool operator<=(EnumerationItem lhs, const SiteTypeEnum& rhs) {
    testForValidItem(lhs);
    return lhs <= rhs.getValue();
  }

  /** Tests whether the value of this SiteTypeEnum enumeration is greater than the value of the specified EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this SiteTypeEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is greater than the value of this SiteTypeEnum enumeration,
    *      false otherwise.
    */
  bool operator>(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() > rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is greater than the value of the specified SiteTypeEnum
    * enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified SiteTypeEnum
    *      enumeration.
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is greater than the value of the SiteTypeEnum enumeration
    *      (rhs), false otherwise.
    */
  friend bool operator>(EnumerationItem lhs, const SiteTypeEnum& rhs) {
    testForValidItem(lhs);
    return lhs > rhs.getValue();
  }

  /** Tests whether the value of this SiteTypeEnum enumeration is greater than or equal to the value of the specified
    * EnumerationItem.
    *
    * @param rhs The EnumerationItem whose value is to be compared against the value of this SiteTypeEnum enumeration.
    * @return True if the value of the EnumerationItem (rhs) is greater than or equal to the value of this SiteTypeEnum
    *      enumeration, false otherwise.
    */
  bool operator>=(EnumerationItem rhs) const {
    testForValidItem(rhs);
    return getValue() >= rhs;
  }

  /** Tests whether the value of the specified EnumerationItem is greater than or equal to the value of the specified
    * SiteTypeEnum enumeration.
    *
    * @param lhs The EnumerationItem whose value is to be compared against the value of the specified SiteTypeEnum
    *      enumeration.
    * @param rhs The SiteTypeEnum enumeration whose value is to be compared against the value of the specified
    *      EnumerationItem.
    * @return True if the value of the EnumerationItem (lhs) is greater than or equal to the value of the SiteTypeEnum
    *      enumeration (rhs), false otherwise.
    */
  friend bool operator>=(EnumerationItem lhs, const SiteTypeEnum& rhs) {
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

  /** Return the name of the enumeration item that the value of this SiteTypeEnum enumeration is set to.
    *
    * @return The name of the enumeration item.
    */
  virtual std::string toName() const {
    return toName(getValue());
  }

  /** Sets the value of this SiteTypeEnum enumeration to the value of the enumeration item having the specified name.
    *
    * @param itemName The name of the enumeration item whose value is to be used to set this SiteTypeEnum enumeration to.
    */
  virtual void setValueFromName(const std::string& itemName) {
    setValue(fromName(itemName));
  }

protected:

  /** The default constructor. In addition to constructing a new SiteTypeEnum, this constructor also makes sure the
    * conversion tables are initialized.
    */
  SiteTypeEnum() {
  }

  /** The destructor [only available to derived classes]. */
  ~SiteTypeEnum() {
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
    * @param rhs The SiteTypeEnum to copy from.
    */
  SiteTypeEnum(const SiteTypeEnum& rhs) {
    (void)rhs;
  }

};

} // namespace type
} // namespace uci

template<typename charT, typename traits>
std::basic_ostream<charT, traits>&
operator<<(std::basic_ostream<charT, traits>& oStream, const uci::type::SiteTypeEnum& enumeration)
{
  oStream << enumeration.toName();
  return oStream;
}

#endif // UCI_TYPE_SITETYPEENUM_H

