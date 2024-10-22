/** @file MDF_Type.h
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

#ifndef UCI_TYPE_MDF_TYPE_H
#define UCI_TYPE_MDF_TYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "MDF_ID_Type.h"
#include "MDF_StatusEnum.h"
#include "MDF_SubCategoryType.h"

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

/** Indicates a Mission Data File (MDF) and its status. A MDF is a collection of data, organized into files, that is used
  * to tailor, configure or otherwise affect the behavior of a Capability. MDFs can vary from mission to mission or even
  * by phases of a single mission. They are generally developed in pre-mission planning and are unique for each Subsystem
  * model. Their content is not standardized by UCI, but the mechanism for advertising their availability and activating
  * them is. Their content is abstracted by the UCI concept of Capability.
  */
class MDF_Type : public virtual uci::base::Accessor {
public:

  /** This method constructs a new MDF_Type.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MDF_Type.
    */
  static UCI_EXPORT MDF_Type& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new MDF_Type initializing the data accessed by the new MDF_Type using the data accessed by
    * the specified MDF_Type (cloning).
    *
    * @param accessor The MDF_Type that provides access to the data that is to be used to initialize the data accessed by
    *      the new created MDF_Type.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MDF_Type.
    */
  static UCI_EXPORT MDF_Type& create(const MDF_Type& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified MDF_Type. Use of the specified accessor after it has been destroyed will result in
    * undefined behavior.
    *
    * @param accessor The MDF_Type that is to be destroyed.
    */
  static UCI_EXPORT void destroy(MDF_Type& accessor);

  /** Returns this accessor's type constant, i.e. mDF_Type.
    *
    * @return This accessor's type constant, i.e. mDF_Type.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::mDF_Type;
  }

  /** Returns the version that was initialized from the uci:version attribute of MDF_Type.
    *
    * @return The version that was initialized from the uci:version attribute of MDF_Type.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const MDF_Type& accessor) = 0;

  /** Indicates a subcategory of files that make up the MDF. When an MDF is "active", at most one file from each
    * subcategory can be active. The subcategory concept allows a variety of MDF structures across Capability types and
    * manufacturers. For an ESM Capability, example subcategories could be "scan files" and "emitter ID files". For an EA
    * Capability, an example is "jam files". This element is optional to support Capabilities or Subsystems whose MDF isn't
    * decomposed into individually selectable categories and files. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::MDF_SubCategoryType, uci::type::accessorType::mDF_SubCategoryType> SubCategory;

  /** Returns a const reference to the accessor that provides access to the complex content identified by MDF_ID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by MDF_ID.
    */
  virtual const uci::type::MDF_ID_Type& getMDF_ID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MDF_ID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MDF_ID.
    */
  virtual uci::type::MDF_ID_Type& getMDF_ID() = 0;

  /** Sets the complex content identified by MDF_ID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MDF_ID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_Type& setMDF_ID(const uci::type::MDF_ID_Type& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by MDF_Status.
    *
    * @return A const reference to the value of the enumeration identified by MDF_Status.
    */
  virtual const uci::type::MDF_StatusEnum& getMDF_Status() const = 0;

  /** Returns a reference to the value of the enumeration identified by MDF_Status.
    *
    * @return A reference to the value of the enumeration identified by MDF_Status.
    */
  virtual uci::type::MDF_StatusEnum& getMDF_Status() = 0;

  /** Sets the value of the enumeration identified by MDF_Status.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_Type& setMDF_Status(const uci::type::MDF_StatusEnum& value) = 0;

  /** Sets the value of the enumeration identified by MDF_Status.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_Type& setMDF_Status(uci::type::MDF_StatusEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by MDF_Status exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by MDF_Status is enabled or not.
    */
  virtual bool hasMDF_Status() const = 0;

  /** Enables the Element identified by MDF_Status.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by MDF_Status.
    */
  virtual uci::type::MDF_StatusEnum& enableMDF_Status(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by MDF_Status.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_Type& clearMDF_Status() = 0;

  /** Returns a const reference to the bounded list identified by SubCategory.
    *
    * @return A const reference to the bounded list identified by SubCategory.
    */
  virtual const uci::type::MDF_Type::SubCategory& getSubCategory() const = 0;

  /** Returns a reference to the bounded list identified by SubCategory.
    *
    * @return A reference to the bounded list identified by SubCategory.
    */
  virtual uci::type::MDF_Type::SubCategory& getSubCategory() = 0;

  /** Sets the bounded list identified by SubCategory.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_Type& setSubCategory(const uci::type::MDF_Type::SubCategory& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  MDF_Type() {
  }

  /** The destructor [only available to derived classes]. */
  ~MDF_Type() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The MDF_Type to copy from.
    */
  MDF_Type(const MDF_Type& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this MDF_Type to the contents of the MDF_Type on the right hand side
    * (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The MDF_Type on the right hand side (rhs) of the assignment operator whose contents are used to set the
    *      contents of this MDF_Type.
    * @return A reference to this MDF_Type.
    */
  MDF_Type& operator=(const MDF_Type& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_MDF_TYPE_H

