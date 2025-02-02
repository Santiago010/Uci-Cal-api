/** @file EntityMetadataMT.h
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

#ifndef UCI_TYPE_ENTITYMETADATAMT_H
#define UCI_TYPE_ENTITYMETADATAMT_H

#include "../base/Listener.h"
#include "../base/Reader.h"
#include "../base/Writer.h"
#include "../base/export.h"
#include "EntityMetadataMDT.h"
#include "MessageType.h"
#include "ObjectStateEnum.h"

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

/** See the annotation in the associated message for an overall description of the message and this type. */
class EntityMetadataMT : public virtual MessageType {
public:

  /** This method constructs a new EntityMetadataMT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityMetadataMT.
    */
  static UCI_EXPORT EntityMetadataMT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new EntityMetadataMT initializing the data accessed by the new EntityMetadataMT using the
    * data accessed by the specified EntityMetadataMT (cloning).
    *
    * @param accessor The EntityMetadataMT that provides access to the data that is to be used to initialize the data
    *      accessed by the new created EntityMetadataMT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed EntityMetadataMT.
    */
  static UCI_EXPORT EntityMetadataMT& create(const EntityMetadataMT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified EntityMetadataMT. Use of the specified accessor after it has been destroyed will
    * result in undefined behavior.
    *
    * @param accessor The EntityMetadataMT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(EntityMetadataMT& accessor);

  /** Returns this accessor's type constant, i.e. entityMetadataMT.
    *
    * @return This accessor's type constant, i.e. entityMetadataMT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::entityMetadataMT;
  }

  /** Returns the version that was initialized from the uci:version attribute of EntityMetadataMT.
    *
    * @return The version that was initialized from the uci:version attribute of EntityMetadataMT.
    */
  static std::string getUCITypeVersion() {
    return "001.000.001.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const EntityMetadataMT& accessor) = 0;

  /** Returns a const reference to the value of the enumeration identified by ObjectState.
    *
    * @return A const reference to the value of the enumeration identified by ObjectState.
    */
  virtual const uci::type::ObjectStateEnum& getObjectState() const = 0;

  /** Returns a reference to the value of the enumeration identified by ObjectState.
    *
    * @return A reference to the value of the enumeration identified by ObjectState.
    */
  virtual uci::type::ObjectStateEnum& getObjectState() = 0;

  /** Sets the value of the enumeration identified by ObjectState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityMetadataMT& setObjectState(const uci::type::ObjectStateEnum& value) = 0;

  /** Sets the value of the enumeration identified by ObjectState.
    *
    * @param value The value to set the enumeration to.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityMetadataMT& setObjectState(uci::type::ObjectStateEnum::EnumerationItem value) = 0;

  /** Returns whether the Element identified by ObjectState exists (is enabled) or not.
    *
    * @return A boolean indicating whether the Element identified by ObjectState is enabled or not.
    */
  virtual bool hasObjectState() const = 0;

  /** Enables the Element identified by ObjectState.
    *
    * @param type = uci::base::accessorType::null This Accessor's accessor type.
    * @return A reference to the value of the enumeration identified by ObjectState.
    */
  virtual uci::type::ObjectStateEnum& enableObjectState(uci::base::accessorType::AccessorType type = uci::base::accessorType::null) = 0;

  /** Clears (disabled) the Element identified by ObjectState.
    *
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityMetadataMT& clearObjectState() = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by MessageData.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by MessageData.
    */
  virtual const uci::type::EntityMetadataMDT& getMessageData() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MessageData.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MessageData.
    */
  virtual uci::type::EntityMetadataMDT& getMessageData() = 0;

  /** Sets the complex content identified by MessageData to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MessageData.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::EntityMetadataMT& setMessageData(const uci::type::EntityMetadataMDT& value) = 0;

  /** The Listener provides the support to listen and handle incoming messages of the type uci::type::EntityMetadataMT. */
  class Listener : public uci::base::Listener {
  public:

    /** The destructor. */
    ~Listener() {
    }


    /** The method is used to handle incoming messages.
      *
      * @param message The newly arrive message that is to be handled by this method.
      */
    virtual void handleMessage(const uci::type::EntityMetadataMT& message) = 0;

  };

  /** The Reader provides the support to reader incoming messages. */
  class Reader : public virtual uci::base::Reader {
  public:

    /** Adds a listener to this reader to handle incoming messages.
      *
      * @param listener The listener that will listen for and handle incoming messages.
      */
    virtual void addListener(uci::type::EntityMetadataMT::Listener& listener) = 0;

    /** Removes the specified listener from this reader.
      *
      * @param listener The listener that is to be removed from this reader.
      */
    virtual void removeListener(uci::type::EntityMetadataMT::Listener& listener) = 0;

    /** Reads the next incoming message(s). Returns immediately if no messages are available.
      *
      * @param maxNumberOfMessages The maximum number of messages that will be handled by the read operation.
      * @param listener The listener that will handle the incoming messages.
      * @return The number of messages that were handled.
      */
    virtual unsigned long readNoWait(unsigned long maxNumberOfMessages, uci::type::EntityMetadataMT::Listener& listener) = 0;

    /** Reads the next incoming message(s).
      *
      * @param timeout Maximum time in microseconds to wait for new messages to arrive. The timeout is ignored if one or
      *      messages are already queued. After the first invocation of the listener's handleMessage(), this timeout is
      *      ignored. A zero indicates that the read should wait forever.
      * @param maxNumberOfMessages The maximum number of messages that will be handled by the read operation.
      * @param listener The listener that will handle the incoming messages.
      * @return The number of messages that were handled.
      */
    virtual unsigned long read(unsigned long timeout, unsigned long maxNumberOfMessages, uci::type::EntityMetadataMT::Listener& listener) = 0;

    /** Closes the reader. Once closed, any further attempts to use this Reader to read messages, either by adding new
      * Listeners or by invoking the read() method, will result in an undefined behavior.
      */
    virtual void close() = 0;

  protected:

    /** The constructor [only available to derived classes]. */
    Reader() {
    }

    /** The destructor [only available to derived classes]. */
    ~Reader() {
    }

    /** The copy constructor [only available to derived classes].
      *
      * @param rhs The Reader to copy from.
      */
    Reader(const Reader& rhs) {
      (void)rhs;
    }

    /** The assignment operator. Sets the contents of this Reader to the contents of the Reader on the right hand side (rhs)
      * of the assignment operator [only available to derived classes].
      *
      * @param rhs The Reader on the right hand side (rhs) of the assignment operator whose contents are used to set the
      *      contents of this Reader.
      * @return A reference to this Reader.
      */
    Reader& operator=(const Reader& rhs) {
      (void)rhs;

      return *this;
    }

  };

  /** This method creates a new reader that can be used to read a EntityMetadataMT.
    *
    * @param topic The specification of the topic the reader is to read from.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return A reader that can read a EntityMetadataMT.
    */
  static UCI_EXPORT uci::type::EntityMetadataMT::Reader& createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection);

  /** This method destroys a reader. Use of the specified accessor after it has been destroyed will result in undefined
    * behavior.
    *
    * @param reader The reader that is to be destroyed.
    */
  static UCI_EXPORT void destroyReader(uci::type::EntityMetadataMT::Reader& reader);

  /** The writer provides the support to write messages. */
  class Writer : public virtual uci::base::Writer {
  public:

    /** Writes the OMS message to the topic specified when this Writer was created.
      *
      * @param accessor The Accessor that provides access to the message that is to be written.
      */
    virtual void write(uci::type::EntityMetadataMT& accessor) = 0;

    /** Closes the writer. Once closed, any further attempts to use this Writer to write messages will result in an undefined
      * behavior.
      */
    virtual void close() = 0;

  protected:

    /** The constructor [only available to derived classes]. */
    Writer() {
    }

    /** The destructor [only available to derived classes]. */
    ~Writer() {
    }

    /** The copy constructor [only available to derived classes].
      *
      * @param rhs The Writer to copy from.
      */
    Writer(const Writer& rhs) {
      (void)rhs;
    }

    /** The assignment operator. Sets the contents of this Writer to the contents of the Writer on the right hand side (rhs)
      * of the assignment operator [only available to derived classes].
      *
      * @param rhs The Writer on the right hand side (rhs) of the assignment operator whose contents are used to set the
      *      contents of this Writer.
      * @return A reference to this Writer.
      */
    Writer& operator=(const Writer& rhs) {
      (void)rhs;

      return *this;
    }

  };

  /** This method creates a new writer that can be used to write a EntityMetadataMT.
    *
    * @param topic The specification of the topic the writer is to write to.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return A writer that can write a EntityMetadataMT.
    */
  static UCI_EXPORT uci::type::EntityMetadataMT::Writer& createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection);

  /** This method destroys a writer. Use of the specified accessor after it has been destroyed will result in undefined
    * behavior.
    *
    * @param writer The writer that is to be destroyed.
    */
  static UCI_EXPORT void destroyWriter(uci::type::EntityMetadataMT::Writer& writer);

protected:

  /** The constructor [only available to derived classes]. */
  EntityMetadataMT() {
  }

  /** The destructor [only available to derived classes]. */
  ~EntityMetadataMT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The EntityMetadataMT to copy from.
    */
  EntityMetadataMT(const EntityMetadataMT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this EntityMetadataMT to the contents of the EntityMetadataMT on the
    * right hand side (rhs) of the assignment operator [only available to derived classes].
    *
    * @param rhs The EntityMetadataMT on the right hand side (rhs) of the assignment operator whose contents are used to
    *      set the contents of this EntityMetadataMT.
    * @return A reference to this EntityMetadataMT.
    */
  EntityMetadataMT& operator=(const EntityMetadataMT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_ENTITYMETADATAMT_H

