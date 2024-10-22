/** @file ProductManagementTaskDataType.h
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

#ifndef UCI_TYPE_PRODUCTMANAGEMENTTASKDATATYPE_H
#define UCI_TYPE_PRODUCTMANAGEMENTTASKDATATYPE_H

#include "../base/Accessor.h"
#include "../base/BoundedList.h"
#include "../base/export.h"
#include "ComparableRankingType.h"
#include "ConcurrentTaskReferenceType.h"
#include "DependentTaskType.h"
#include "DownloadPriorityEnum.h"
#include "RemarksType.h"
#include "TaskID_Type.h"
#include "TraceabilityType.h"

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

/** This is the base type for all ProductManagement Tasks. */
class ProductManagementTaskDataType : public virtual uci::base::Accessor {
public:

  /** This method constructs a new ProductManagementTaskDataType.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductManagementTaskDataType.
    */
  static UCI_EXPORT ProductManagementTaskDataType& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new ProductManagementTaskDataType initializing the data accessed by the new
    * ProductManagementTaskDataType using the data accessed by the specified ProductManagementTaskDataType (cloning).
    *
    * @param accessor The ProductManagementTaskDataType that provides access to the data that is to be used to initialize
    *      the data accessed by the new created ProductManagementTaskDataType.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed ProductManagementTaskDataType.
    */
  static UCI_EXPORT ProductManagementTaskDataType& create(const ProductManagementTaskDataType& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified ProductManagementTaskDataType. Use of the specified accessor after it has been
    * destroyed will result in undefined behavior.
    *
    * @param accessor The ProductManagementTaskDataType that is to be destroyed.
    */
  static UCI_EXPORT void destroy(ProductManagementTaskDataType& accessor);

  /** Returns this accessor's type constant, i.e. productManagementTaskDataType.
    *
    * @return This accessor's type constant, i.e. productManagementTaskDataType.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::productManagementTaskDataType;
  }

  /** Returns the version that was initialized from the uci:version attribute of ProductManagementTaskDataType.
    *
    * @return The version that was initialized from the uci:version attribute of ProductManagementTaskDataType.
    */
  static std::string getUCITypeVersion() {
    return "002.001.000.001";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const ProductManagementTaskDataType& accessor) = 0;

  /** Provides a way to link tasks. This can be used to represent a strategy such as look-shoot-look. [Occurrences:
    * Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::DependentTaskType, uci::type::accessorType::dependentTaskType> DependentTask;

  /** Provides a way to link tasks with a concurrent temporal relationship. This can be used to represent coordinated
    * attacks. [Occurrences: Minimum: 0; Maximum: MAX_LENGTH]
    */
  typedef uci::base::BoundedList<uci::type::ConcurrentTaskReferenceType, uci::type::accessorType::concurrentTaskReferenceType> ConcurrentTask;

  /** Returns a const reference to the accessor that provides access to the complex content identified by TaskID.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by TaskID.
    */
  virtual const uci::type::TaskID_Type& getTaskID() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by TaskID.
    *
    * @return A reference to the accessor that provides access to the complex content identified by TaskID.
    */
  virtual uci::type::TaskID_Type& getTaskID() = 0;

  /** Sets the complex content identified by TaskID to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by TaskID.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductManagementTaskDataType& setTaskID(const uci::type::TaskID_Type& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Traceability.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Traceability.
    */
  virtual const uci::type::TraceabilityType& getTraceability() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Traceability.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Traceability.
    */
  virtual uci::type::TraceabilityType& getTraceability() = 0;

  /** Sets the complex content identified by Traceability to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Traceability.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductManagementTaskDataType& setTraceability(const uci::type::TraceabilityType& value) = 0;

  /** Returns whether the Element identified by Traceability exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Traceability is enabled or not.
    */
  virtual bool hasTraceability() const = 0;

  /** Enables the Element identified by Traceability.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Traceability.
    */
  virtual uci::type::TraceabilityType& enableTraceability(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Traceability.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductManagementTaskDataType& clearTraceability() = 0;

  /** Returns a const reference to the bounded list identified by DependentTask.
    *
    * @return A const reference to the bounded list identified by DependentTask.
    */
  virtual const uci::type::ProductManagementTaskDataType::DependentTask& getDependentTask() const = 0;

  /** Returns a reference to the bounded list identified by DependentTask.
    *
    * @return A reference to the bounded list identified by DependentTask.
    */
  virtual uci::type::ProductManagementTaskDataType::DependentTask& getDependentTask() = 0;

  /** Sets the bounded list identified by DependentTask.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductManagementTaskDataType& setDependentTask(const uci::type::ProductManagementTaskDataType::DependentTask& value) = 0;

  /** Returns a const reference to the bounded list identified by ConcurrentTask.
    *
    * @return A const reference to the bounded list identified by ConcurrentTask.
    */
  virtual const uci::type::ProductManagementTaskDataType::ConcurrentTask& getConcurrentTask() const = 0;

  /** Returns a reference to the bounded list identified by ConcurrentTask.
    *
    * @return A reference to the bounded list identified by ConcurrentTask.
    */
  virtual uci::type::ProductManagementTaskDataType::ConcurrentTask& getConcurrentTask() = 0;

  /** Sets the bounded list identified by ConcurrentTask.
    *
    * @param value The bounded list whose contents are to be used to set the value of the bounded list accessed by this
    *      accessor.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductManagementTaskDataType& setConcurrentTask(const uci::type::ProductManagementTaskDataType::ConcurrentTask& value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Rank.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Rank.
    */
  virtual const uci::type::ComparableRankingType& getRank() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Rank.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Rank.
    */
  virtual uci::type::ComparableRankingType& getRank() = 0;

  /** Sets the complex content identified by Rank to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Rank.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductManagementTaskDataType& setRank(const uci::type::ComparableRankingType& value) = 0;

  /** Returns a const reference to the value of the enumeration identified by PreemptLowerRank.
    *
    * @return A const reference to the value of the enumeration identified by PreemptLowerRank.
    */
  virtual const uci::type::DownloadPriorityEnum& getPreemptLowerRank() const = 0;

  /** Returns a reference to the value of the enumeration identified by PreemptLowerRank.
    *
    * @return A reference to the value of the enumeration identified by PreemptLowerRank.
    */
  virtual uci::type::DownloadPriorityEnum& getPreemptLowerRank() = 0;

  /** Sets the value of the enumeration identified by PreemptLowerRank.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductManagementTaskDataType& setPreemptLowerRank(const uci::type::DownloadPriorityEnum& value) = 0;

  /** Sets the value of the enumeration identified by PreemptLowerRank.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductManagementTaskDataType& setPreemptLowerRank(uci::type::DownloadPriorityEnum::EnumerationItem value) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by Remarks.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by Remarks.
    */
  virtual const uci::type::RemarksType& getRemarks() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by Remarks.
    *
    * @return A reference to the accessor that provides access to the complex content identified by Remarks.
    */
  virtual uci::type::RemarksType& getRemarks() = 0;

  /** Sets the complex content identified by Remarks to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by Remarks.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductManagementTaskDataType& setRemarks(const uci::type::RemarksType& value) = 0;

  /** Returns whether the Element identified by Remarks exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by Remarks is enabled or not.
    */
  virtual bool hasRemarks() const = 0;

  /** Enables the Element identified by Remarks.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the accessor that provides access to the complex content identified by Remarks.
    */
  virtual uci::type::RemarksType& enableRemarks(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by Remarks.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::ProductManagementTaskDataType& clearRemarks() = 0;

protected:

  /** The constructor [only available to derived classes]. */
  ProductManagementTaskDataType() {
  }

  /** The destructor [only available to derived classes]. */
  ~ProductManagementTaskDataType() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The ProductManagementTaskDataType to copy from.
    */
  ProductManagementTaskDataType(const ProductManagementTaskDataType& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this ProductManagementTaskDataType to the contents of the
    * ProductManagementTaskDataType on the right hand side (rhs) of the assignment operator [only available to derived
    * classes].
    *
    * @param rhs The ProductManagementTaskDataType on the right hand side (rhs) of the assignment operator whose contents
    *      are used to set the contents of this ProductManagementTaskDataType.
    * @return A reference to this ProductManagementTaskDataType.
    */
  ProductManagementTaskDataType& operator=(const ProductManagementTaskDataType& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_PRODUCTMANAGEMENTTASKDATATYPE_H

