/** @file EntityDataType.h
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

#ifndef UCI_TYPE_ENTITYDATATYPE_H
#define UCI_TYPE_ENTITYDATATYPE_H

#include "../base/Accessor.h"
#include "../base/export.h"
#include "EntityMDT.h"
#include "EntityMetadataMDT.h"

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

/** Provides the capability to pass an Entity and any associated metadata message in the same structure. This is
  * typically used when there is a need to pass the entirety of the information about an Entity at a given time as a part
  * of another message. For example, an OpPoint representing an emergency may include the associated Entity and
  * EntityMetadata from the time the emergency was declared.
  */
class EntityDataType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new EntityDataType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityDataType.
    */
  static UCI_EXPORT EntityDataType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EntityDataType initializing the data accessed by the new EntityDataType using the data
    * accessed by the specified EntityDataType (cloning).
    *
    * @param accessor The EntityDataType that provides access to the data that is to be used to initialize the data
    *      accessed by the new created EntityDataType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityDataType.
    */
  static UCI_EXPORT EntityDataType& create(const EntityDataType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EntityDataType. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The EntityDataType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EntityDataType& accessor);

  /** Returns this accessor's type constant, i.e. entityDataType.
    *
    * @return This accessor's type constant, i.e. entityDataType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::entityDataType;
  }

  /** Returns the version that was initialized from the uci:version attribute of EntityDataType.
    *
    * @return The version that was initialized from the uci:version attribute of EntityDataType.
    */
  static std::string getUCITypeVersion() {
    return "003.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EntityDataType& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Entity.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Entity.
    */
  virtual const uci::type::EntityMDT& getEntity() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Entity.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Entity.
    */
  virtual uci::type::EntityMDT& getEntity() = 0;

  /** Sets the complex content identified by Entity to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Entity.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityDataType& setEntity(const uci::type::EntityMDT& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Metadata.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Metadata.
    */
  virtual const uci::type::EntityMetadataMDT& getMetadata() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Metadata.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Metadata.
    */
  virtual uci::type::EntityMetadataMDT& getMetadata() = 0;

  /** Sets the complex content identified by Metadata to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Metadata.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityDataType& setMetadata(const uci::type::EntityMetadataMDT& value) = 0;

  /** Returns whether the Element identified by Metadata exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Metadata is enabled or not.
    */
  virtual bool hasMetadata() const = 0;

  /** Enables the Element identified by Metadata.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Metadata.
    */
  virtual uci::type::EntityMetadataMDT& enableMetadata(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Metadata.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityDataType& clearMetadata() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  EntityDataType() {
  }

  /** The destructor [only available to derived classes]. */
  ~EntityDataType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EntityDataType to copy from.
    */
  EntityDataType(const EntityDataType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EntityDataType to the contents of the EntityDataType on the right
    * hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EntityDataType on the right hand side (rhs) of the assignment operator whose contents are used to set
    *      the contents of this EntityDataType.
    * @return A reference to this EntityDataType.
    */
  EntityDataType& operator=(const EntityDataType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ENTITYDATATYPE_H

