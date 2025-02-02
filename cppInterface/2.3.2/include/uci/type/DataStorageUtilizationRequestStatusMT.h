/** @file DataStorageUtilizationRequestStatusMT.h
 *
 * @warning This file is automatically generated, edit at your own risk
 *
 * This file was generated on 04/01/2024 at 02:25:06 PM
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

#ifndef UCI_TYPE_DATASTORAGEUTILIZATIONREQUESTSTATUSMT_H
#define UCI_TYPE_DATASTORAGEUTILIZATIONREQUESTSTATUSMT_H

#include "../base/Listener.h"
#include "../base/Reader.h"
#include "../base/Writer.h"
#include "../base/export.h"
#include "DataStorageUtilizationRequestStatusMDT.h"
#include "MessageType.h"

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
class DataStorageUtilizationRequestStatusMT : public virtual MessageType {
public:

  /** This method constructs a new DataStorageUtilizationRequestStatusMT.
    *
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DataStorageUtilizationRequestStatusMT.
    */
  static UCI_EXPORT DataStorageUtilizationRequestStatusMT& create(uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method constructs a new DataStorageUtilizationRequestStatusMT initializing the data accessed by the new
    * DataStorageUtilizationRequestStatusMT using the data accessed by the specified DataStorageUtilizationRequestStatusMT
    * (cloning).
    *
    * @param accessor The DataStorageUtilizationRequestStatusMT that provides access to the data that is to be used to
    *      initialize the data accessed by the new created DataStorageUtilizationRequestStatusMT.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return The newly contructed DataStorageUtilizationRequestStatusMT.
    */
  static UCI_EXPORT DataStorageUtilizationRequestStatusMT& create(const DataStorageUtilizationRequestStatusMT& accessor, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection = NULL);

  /** This method destroys the specified DataStorageUtilizationRequestStatusMT. Use of the specified accessor after it has
    * been destroyed will result in undefined behavior.
    *
    * @param accessor The DataStorageUtilizationRequestStatusMT that is to be destroyed.
    */
  static UCI_EXPORT void destroy(DataStorageUtilizationRequestStatusMT& accessor);

  /** Returns this accessor's type constant, i.e. dataStorageUtilizationRequestStatusMT.
    *
    * @return This accessor's type constant, i.e. dataStorageUtilizationRequestStatusMT.
    */
  virtual uci::base::accessorType::AccessorType getAccessorType() const noexception {
    return uci::type::accessorType::dataStorageUtilizationRequestStatusMT;
  }

  /** Returns the version that was initialized from the uci:version attribute of DataStorageUtilizationRequestStatusMT.
    *
    * @return The version that was initialized from the uci:version attribute of DataStorageUtilizationRequestStatusMT.
    */
  static std::string getUCITypeVersion() {
    return "002.000.003.000";
  }

  /** Initializes the contents of this accessor by copying the contents of the specified accessor.
    *
    * @param accessor The accessor whose contents are to be used to initialize the contents of this accessor.
    */
  virtual void copy(const DataStorageUtilizationRequestStatusMT& accessor) = 0;

  /** Returns a const reference to the accessor that provides access to the complex content identified by MessageData.
    *
    * @return A const reference to the accessor that provides access to the complex content identified by MessageData.
    */
  virtual const uci::type::DataStorageUtilizationRequestStatusMDT& getMessageData() const = 0;

  /** Returns a reference to the accessor that provides access to the complex content identified by MessageData.
    *
    * @return A reference to the accessor that provides access to the complex content identified by MessageData.
    */
  virtual uci::type::DataStorageUtilizationRequestStatusMDT& getMessageData() = 0;

  /** Sets the complex content identified by MessageData to the contents of the complex content accessed by the specified
    * accessor.
    *
    * @param value The accessor that provides access to the complex content whose contents are to be used to set the
    *      contents of the complex content identified by MessageData.
    * @return A reference to the object on which this method was called.
    */
  virtual uci::type::DataStorageUtilizationRequestStatusMT& setMessageData(const uci::type::DataStorageUtilizationRequestStatusMDT& value) = 0;

  /** The Listener provides the support to listen and handle incoming messages of the type
    * uci::type::DataStorageUtilizationRequestStatusMT.
    */
  class Listener : public uci::base::Listener {
  public:

    /** The destructor. */
    ~Listener() {
    }


    /** The method is used to handle incoming messages.
      *
      * @param message The newly arrive message that is to be handled by this method.
      */
    virtual void handleMessage(const uci::type::DataStorageUtilizationRequestStatusMT& message) = 0;

  };

  /** The Reader provides the support to reader incoming messages. */
  class Reader : public virtual uci::base::Reader {
  public:

    /** Adds a listener to this reader to handle incoming messages.
      *
      * @param listener The listener that will listen for and handle incoming messages.
      */
    virtual void addListener(uci::type::DataStorageUtilizationRequestStatusMT::Listener& listener) = 0;

    /** Removes the specified listener from this reader.
      *
      * @param listener The listener that is to be removed from this reader.
      */
    virtual void removeListener(uci::type::DataStorageUtilizationRequestStatusMT::Listener& listener) = 0;

    /** Reads the next incoming message(s). Returns immediately if no messages are available.
      *
      * @param maxNumberOfMessages The maximum number of messages that will be handled by the read operation.
      * @param listener The listener that will handle the incoming messages.
      * @return The number of messages that were handled.
      */
    virtual unsigned long readNoWait(unsigned long maxNumberOfMessages, uci::type::DataStorageUtilizationRequestStatusMT::Listener& listener) = 0;

    /** Reads the next incoming message(s).
      *
      * @param timeout Maximum time in microseconds to wait for new messages to arrive. The timeout is ignored if one or
      *      messages are already queued. After the first invocation of the listener's handleMessage(), this timeout is
      *      ignored. A zero indicates that the read should wait forever.
      * @param maxNumberOfMessages The maximum number of messages that will be handled by the read operation.
      * @param listener The listener that will handle the incoming messages.
      * @return The number of messages that were handled.
      */
    virtual unsigned long read(unsigned long timeout, unsigned long maxNumberOfMessages, uci::type::DataStorageUtilizationRequestStatusMT::Listener& listener) = 0;

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

  /** This method creates a new reader that can be used to read a DataStorageUtilizationRequestStatusMT.
    *
    * @param topic The specification of the topic the reader is to read from.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return A reader that can read a DataStorageUtilizationRequestStatusMT.
    */
  static UCI_EXPORT uci::type::DataStorageUtilizationRequestStatusMT::Reader& createReader(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection);

  /** This method destroys a reader. Use of the specified accessor after it has been destroyed will result in undefined
    * behavior.
    *
    * @param reader The reader that is to be destroyed.
    */
  static UCI_EXPORT void destroyReader(uci::type::DataStorageUtilizationRequestStatusMT::Reader& reader);

  /** The writer provides the support to write messages. */
  class Writer : public virtual uci::base::Writer {
  public:

    /** Writes the OMS message to the topic specified when this Writer was created.
      *
      * @param accessor The Accessor that provides access to the message that is to be written.
      */
    virtual void write(uci::type::DataStorageUtilizationRequestStatusMT& accessor) = 0;

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

  /** This method creates a new writer that can be used to write a DataStorageUtilizationRequestStatusMT.
    *
    * @param topic The specification of the topic the writer is to write to.
    * @param abstractServiceBusConnection The pointer to the Abstract Service Bus Connection that provides the support
    *      required to create objects.
    * @return A writer that can write a DataStorageUtilizationRequestStatusMT.
    */
  static UCI_EXPORT uci::type::DataStorageUtilizationRequestStatusMT::Writer& createWriter(const std::string& topic, uci::base::AbstractServiceBusConnection* abstractServiceBusConnection);

  /** This method destroys a writer. Use of the specified accessor after it has been destroyed will result in undefined
    * behavior.
    *
    * @param writer The writer that is to be destroyed.
    */
  static UCI_EXPORT void destroyWriter(uci::type::DataStorageUtilizationRequestStatusMT::Writer& writer);

protected:

  /** The constructor [only available to derived classes]. */
  DataStorageUtilizationRequestStatusMT() {
  }

  /** The destructor [only available to derived classes]. */
  ~DataStorageUtilizationRequestStatusMT() {
  }

  /** The copy constructor [only available to derived classes].
    *
    * @param rhs The DataStorageUtilizationRequestStatusMT to copy from.
    */
  DataStorageUtilizationRequestStatusMT(const DataStorageUtilizationRequestStatusMT& rhs) {
    (void)rhs;
  }

  /** The assignment operator. Sets the contents of this DataStorageUtilizationRequestStatusMT to the contents of the
    * DataStorageUtilizationRequestStatusMT on the right hand side (rhs) of the assignment operator [only available to
    * derived classes].
    *
    * @param rhs The DataStorageUtilizationRequestStatusMT on the right hand side (rhs) of the assignment operator whose
    *      contents are used to set the contents of this DataStorageUtilizationRequestStatusMT.
    * @return A reference to this DataStorageUtilizationRequestStatusMT.
    */
  DataStorageUtilizationRequestStatusMT& operator=(const DataStorageUtilizationRequestStatusMT& rhs) {
    (void)rhs;

    return *this;
  }

};

} // namespace type
} // namespace uci

#endif // UCI_TYPE_DATASTORAGEUTILIZATIONREQUESTSTATUSMT_H

