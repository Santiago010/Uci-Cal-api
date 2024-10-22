/** @file MDF_SubCategoryType.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:07 PM
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

#ifndef UCI_TYPE_MDF_SUBCATEGORYTYPE_H
#define UCI_TYPE_MDF_SUBCATEGORYTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "MDF_FileType.h"
#include "MDF_StatusEnum.h"
#include "MDF_SubCategoryID_Type.h"

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all base data types are declared */
namespace base {

class AbstractServiceBusConnection;

} // namespace base
} // namespace uci

/** The namespace in which all UCI data types are declared */
namespace uci {

/** The namespace in which all generated data types are declared */
namespace type {

/** Indicates a subcategory of files that make up a Mission Data File ( MDF). */
class MDF_SubCategoryType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new MDF_SubCategoryType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MDF_SubCategoryType.
    */
  static UCI_EXPORT MDF_SubCategoryType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new MDF_SubCategoryType initializing the data accessed by the new MDF_SubCategoryType using
    * the data accessed by the specified MDF_SubCategoryType (cloning).
    *
    * @param accessor The MDF_SubCategoryType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created MDF_SubCategoryType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MDF_SubCategoryType.
    */
  static UCI_EXPORT MDF_SubCategoryType& create(const MDF_SubCategoryType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified MDF_SubCategoryType. Use of the specified accessor after it has been destroyed
    * will result in undefined behavior.
    *
    * @param accessor The MDF_SubCategoryType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(MDF_SubCategoryType& accessor);

  /** Returns this accessor's type constant, i.e. mDF_SubCategoryType.
    *
    * @return This accessor's type constant, i.e. mDF_SubCategoryType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::mDF_SubCategoryType;
  }

  /** Returns the version that was initialized from the uci:version attribute of MDF_SubCategoryType.
    *
    * @return The version that was initialized from the uci:version attribute of MDF_SubCategoryType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const MDF_SubCategoryType& accessor) = 0;

  /** Indicates the structure to define the file ID and status of the file or files associated with the specified MDF
    * Subcategory file or fileset. [Occurrences: Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::MDF_FileType, uci::type::accessorType::mDF_FileType> File;

  /** Returns a const reference to the accessor that provides access to the complex content identified by SubCategoryID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by SubCategoryID.
    */
  virtual const uci::type::MDF_SubCategoryID_Type& getSubCategoryID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by SubCategoryID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by SubCategoryID.
    */
  virtual uci::type::MDF_SubCategoryID_Type& getSubCategoryID() = 0;

  /** Sets the complex content identified by SubCategoryID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by SubCategoryID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_SubCategoryType& setSubCategoryID(const uci::type::MDF_SubCategoryID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by SubCategoryStatus.
    *
    * @return A const reference to the value of the enumeration identified by SubCategoryStatus.
    */
  virtual const uci::type::MDF_StatusEnum& getSubCategoryStatus() const = 0;

  /** Returns a reference to the value of the enumeration identified by SubCategoryStatus.
    *
    * @return A reference to the value of the enumeration identified by SubCategoryStatus.
    */
  virtual uci::type::MDF_StatusEnum& getSubCategoryStatus() = 0;

  /** Sets the value of the enumeration identified by SubCategoryStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_SubCategoryType& setSubCategoryStatus(const uci::type::MDF_StatusEnum& value) = 0;

  /** Sets the value of the enumeration identified by SubCategoryStatus.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_SubCategoryType& setSubCategoryStatus(uci::type::MDF_StatusEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by SubCategoryStatus exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by SubCategoryStatus is enabled or not.
    */
  virtual bool hasSubCategoryStatus() const = 0;

  /** Enables the Element identified by SubCategoryStatus.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by SubCategoryStatus.
    */
  virtual uci::type::MDF_StatusEnum& enableSubCategoryStatus(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by SubCategoryStatus.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_SubCategoryType& clearSubCategoryStatus() = 0;

  /** Returns a const reference to the bounded list identified by File.
    *
    * @return A const reference to the bounded list identified by File.
    */
  virtual const uci::type::MDF_SubCategoryType::File& getFile() const = 0;

  /** Returns a reference to the bounded list identified by File.
    *
    * @return A reference to the bounded list identified by File.
    */
  virtual uci::type::MDF_SubCategoryType::File& getFile() = 0;

  /** Sets the bounded list identified by File.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_SubCategoryType& setFile(const uci::type::MDF_SubCategoryType::File& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  MDF_SubCategoryType() {
  }

  /** The destructor [only available to derived classes]. */
  ~MDF_SubCategoryType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The MDF_SubCategoryType to copy from.
    */
  MDF_SubCategoryType(const MDF_SubCategoryType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this MDF_SubCategoryType to the contents of the MDF_SubCategoryType on
    * the right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The MDF_SubCategoryType on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this MDF_SubCategoryType.
    * @return A reference to this MDF_SubCategoryType.
    */
  MDF_SubCategoryType& operator=(const MDF_SubCategoryType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_MDF_SUBCATEGORYTYPE_H

