/** @file MDF_CommandType.h
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

#ifndef UCI_TYPE_MDF_COMMANDTYPE_H
#define UCI_TYPE_MDF_COMMANDTYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "MDF_CommandSubCategoryType.h"
#include "MDF_ID_Type.h"

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

/** Indicates the commanded Mission Data File (MDF). An MDF is a collection of data, organized into files, that is used
  * to tailor, configure or otherwise affect the behavior of a Capability. MDFs can vary from mission to mission or even
  * by phases of a single mission. They are generally developed in pre-mission planning and are unique for each Subsystem
  * model. Their content is not standardized by UCI, but the mechanism for advertising their availability and activating
  * them is. Their content is abstracted by the UCI concept of Capability.
  */
class MDF_CommandType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new MDF_CommandType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MDF_CommandType.
    */
  static UCI_EXPORT MDF_CommandType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new MDF_CommandType initializing the data accessed by the new MDF_CommandType using the data
    * accessed by the specified MDF_CommandType (cloning).
    *
    * @param accessor The MDF_CommandType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created MDF_CommandType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed MDF_CommandType.
    */
  static UCI_EXPORT MDF_CommandType& create(const MDF_CommandType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified MDF_CommandType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The MDF_CommandType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(MDF_CommandType& accessor);

  /** Returns this accessor's type constant, i.e. mDF_CommandType.
    *
    * @return This accessor's type constant, i.e. mDF_CommandType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::mDF_CommandType;
  }

  /** Returns the version that was initialized from the uci:version attribute of MDF_CommandType.
    *
    * @return The version that was initialized from the uci:version attribute of MDF_CommandType.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const MDF_CommandType& accessor) = 0;

  /** Indicates a subcategory of files that make up the MDF. When an MDF is "active", at most one file from each
    * subcategory can be active. The subcategory concept allows a variety of MDF structures across Capability types and
    * manufacturers. For an ESM Capability, example subcategories could be "scan files" and "emitter ID files". For an EA
    * Capability, an example is "jam files". This element is optional to support Capabilities or Subsystems whose MDF isn't
    * decomposed into individually selectable categories and files. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::MDF_CommandSubCategoryType, uci::type::accessorType::mDF_CommandSubCategoryType> SubCategory;

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
  virtual uci::type::MDF_CommandType& setMDF_ID(const uci::type::MDF_ID_Type& value) = 0;

  /** Returns a const reference to the bounded list identified by SubCategory.
    *
    * @return A const reference to the bounded list identified by SubCategory.
    */
  virtual const uci::type::MDF_CommandType::SubCategory& getSubCategory() const = 0;

  /** Returns a reference to the bounded list identified by SubCategory.
    *
    * @return A reference to the bounded list identified by SubCategory.
    */
  virtual uci::type::MDF_CommandType::SubCategory& getSubCategory() = 0;

  /** Sets the bounded list identified by SubCategory.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::MDF_CommandType& setSubCategory(const uci::type::MDF_CommandType::SubCategory& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  MDF_CommandType() {
  }

  /** The destructor [only available to derived classes]. */
  ~MDF_CommandType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The MDF_CommandType to copy from.
    */
  MDF_CommandType(const MDF_CommandType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this MDF_CommandType to the contents of the MDF_CommandType on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The MDF_CommandType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this MDF_CommandType.
    * @return A reference to this MDF_CommandType.
    */
  MDF_CommandType& operator=(const MDF_CommandType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_MDF_COMMANDTYPE_H

