/** @file EntityMetadataMDT.h
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

#ifndef UCI_TYPE_ENTITYMETADATAMDT_H
#define UCI_TYPE_ENTITYMETADATAMDT_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "EntityID_Type.h"
#include "EntityMetadataPET.h"
#include "MetadataID_Type.h"

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

/** See annotations in child elements and messages/elements that use this type for details. */
class EntityMetadataMDT : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EntityMetadataMDT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityMetadataMDT.
    */
  static UCI_EXPORT EntityMetadataMDT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EntityMetadataMDT initializing the data accessed by the new EntityMetadataMDT using the
    * data accessed by the specified EntityMetadataMDT (cloning).
    *
    * @param accessor The EntityMetadataMDT that provides access to the data that is to be used to initialize the data
    *      accessed by the new created EntityMetadataMDT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityMetadataMDT.
    */
  static UCI_EXPORT EntityMetadataMDT& create(const EntityMetadataMDT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EntityMetadataMDT. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The EntityMetadataMDT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EntityMetadataMDT& accessor);

  /** Returns this accessor's type constant, i.e. entityMetadataMDT.
    *
    * @return This accessor's type constant, i.e. entityMetadataMDT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::entityMetadataMDT;
  }

  /** Returns the version that was initialized from the uci:version attribute of EntityMetadataMDT.
    *
    * @return The version that was initialized from the uci:version attribute of EntityMetadataMDT.
    */
  static std::string getUCITypeVersion() {
    return "000.000.000.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EntityMetadataMDT& accessor) = 0;

  /** Extension point for Metadata content. There can be separate metadata for each contributing source. [Occurrences:
    * Minimum: 1; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::EntityMetadataPET, uci::type::accessorType::entityMetadataPET> Metadata;

  /** Returns a const reference to the accessor that provides access to the complex content identified by MetadataID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by MetadataID.
    */
  virtual const uci::type::MetadataID_Type& getMetadataID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MetadataID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MetadataID.
    */
  virtual uci::type::MetadataID_Type& getMetadataID() = 0;

  /** Sets the complex content identified by MetadataID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MetadataID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityMetadataMDT& setMetadataID(const uci::type::MetadataID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by EntityID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by EntityID.
    */
  virtual const uci::type::EntityID_Type& getEntityID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by EntityID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by EntityID.
    */
  virtual uci::type::EntityID_Type& getEntityID() = 0;

  /** Sets the complex content identified by EntityID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by EntityID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityMetadataMDT& setEntityID(const uci::type::EntityID_Type& value) = 0;

  /** Enables the Element identified by EntityID.
    *
    * @param type = uci::base::accessorType::null The type of data that is to be made available for the element. The use of
    *      this parameter provides support for inheritable types. This parameter defaults to uci::base::accessorType::null
    *      that is used to indicate that the access methods associated with the element shall provide access to data of the
    *      type that was specified for that element in the OMS schema, i.e. the element's base type. If specified, this
    *      field must either be a type ID associated with the element's base type or a type ID associated with a type that
    *      is derived from the element's base type.
    * @return A reference to the accessor that provides access to the complex content identified by EntityID.
    */
  virtual uci::type::EntityID_Type& enableEntityID(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Returns a const reference to the bounded list identified by Metadata.
    *
    * @return A const reference to the bounded list identified by Metadata.
    */
  virtual const uci::type::EntityMetadataMDT::Metadata& getMetadata() const = 0;

  /** Returns a reference to the bounded list identified by Metadata.
    *
    * @return A reference to the bounded list identified by Metadata.
    */
  virtual uci::type::EntityMetadataMDT::Metadata& getMetadata() = 0;

  /** Sets the bounded list identified by Metadata.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityMetadataMDT& setMetadata(const uci::type::EntityMetadataMDT::Metadata& value) = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EntityMetadataMDT() {
  }

  /** The destructor [only available to derived classes]. */
  ~EntityMetadataMDT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EntityMetadataMDT to copy from.
    */
  EntityMetadataMDT(const EntityMetadataMDT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EntityMetadataMDT to the contents of the EntityMetadataMDT on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EntityMetadataMDT on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this EntityMetadataMDT.
    * @return A reference to this EntityMetadataMDT.
    */
  EntityMetadataMDT& operator=(const EntityMetadataMDT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ENTITYMETADATAMDT_H

