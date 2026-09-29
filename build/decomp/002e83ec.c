// OoT3D decomp @ 002e83ec  name=FUN_002e83ec  size=4216

void FUN_002e83ec(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  char local_30 [4];
  ushort local_2c [2];
  ushort local_28 [2];

  FUN_002f9484(local_28,local_2c,local_30);
  iVar3 = DAT_002e9300;
  iVar1 = DAT_002e92fc;
  iVar2 = *(int *)(DAT_002e92fc + 8);
  if (*(int *)(DAT_002e92fc + 0x30) != -1) {
    if (iVar2 < 4) {
      iVar2 = FUN_0033f428(4,0xcc,0x60,0x20,2);
      uVar5 = 0xfffffff0;
      if (((iVar2 != 0) && (*(int *)(iVar1 + 0x30) == -10)) ||
         ((iVar2 = FUN_0033f428(0xdc,0xcc,0x60,0x20,2), iVar2 != 0 &&
          (*(int *)(iVar1 + 0x30) == -0xb)))) goto LAB_002e85b8;
      iVar2 = *(int *)(iVar1 + 8);
      uVar5 = 0xffffffec;
      if (iVar2 < 2) {
        iVar2 = FUN_0033f428(0xa1,0x28,0x80,0x18,2);
        if (iVar2 != 0) {
          if (*(int *)(iVar1 + 0x30) != -2) {
            return;
          }
          goto LAB_002e85b8;
        }
        iVar2 = FUN_0033f428(0x1f,0x42,0x101,0x7f,2);
        if (iVar2 == 0) {
          iVar2 = FUN_0033f428(5,0x42,0x1a,0x82,2);
          if (iVar2 != 0) {
            iVar2 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x39)) >> 0x20
                         );
            iVar2 = (iVar2 >> 3) - (iVar2 >> 0x1f);
            iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_2c[0] - 0x42)) >> 0x20
                         );
            bVar6 = iVar2 == *(int *)(iVar1 + 0x34);
            if (bVar6) {
              iVar2 = *(int *)(iVar1 + 0x38);
            }
            if (!bVar6 || (iVar3 >> 3) - (iVar3 >> 0x1f) != iVar2) {
              return;
            }
            goto LAB_002e944c;
          }
          iVar3 = FUN_0033f428(0x123,0x42,0x1a,0x1a,2);
          if (iVar3 != 0) {
            iVar3 = *(int *)(iVar1 + 0x10);
            bVar6 = iVar3 == 10;
            if (bVar6) {
              iVar3 = *(int *)(iVar1 + 0x14);
            }
            if (!bVar6 || iVar3 != 0) {
              return;
            }
            goto LAB_002e944c;
          }
          iVar3 = FUN_0033f428(0x123,0x5c,0x1a,0x34,2);
          if (iVar3 != 0) {
            iVar3 = *(int *)(iVar1 + 0x10);
            bVar6 = iVar3 == 10;
            if (bVar6) {
              iVar3 = *(int *)(iVar1 + 0x14);
            }
            if (!bVar6 || iVar3 != 1) {
              return;
            }
            goto LAB_002e944c;
          }
          iVar3 = FUN_0033f428(0x123,0x90,0x1a,0x34,2);
          if (iVar3 != 0) {
            iVar3 = *(int *)(iVar1 + 0x10);
            bVar6 = iVar3 == 10;
            if (bVar6) {
              iVar3 = *(int *)(iVar1 + 0x14);
            }
            if (!bVar6 || iVar3 != 3) {
              return;
            }
            goto LAB_002e944c;
          }
          if (local_30[0] != '\0') {
            return;
          }
          goto LAB_002e8e2c;
        }
        iVar2 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x1f)) >> 0x20);
        iVar2 = (iVar2 >> 3) - (iVar2 >> 0x1f);
        iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_2c[0] - 0x42)) >> 0x20);
        bVar6 = iVar2 == *(int *)(iVar1 + 0x34);
        if (bVar6) {
          iVar2 = *(int *)(iVar1 + 0x38);
        }
        if (!bVar6 || (iVar3 >> 3) - (iVar3 >> 0x1f) != iVar2) {
          return;
        }
        goto LAB_002e944c;
      }
      if (iVar2 == 2) {
        if (*(int *)(iVar1 + 0x40) == 0) {
          iVar2 = FUN_0033f428(0x1f,0x28,0x80,0x18,2);
          if ((iVar2 != 0) && (*(int *)(iVar1 + 0x30) == -3)) goto LAB_002e85b8;
        }
        else {
          iVar2 = FUN_0033f428(0xa1,0x28,0x80,0x18,2);
          if ((iVar2 != 0) && (*(int *)(iVar1 + 0x30) == -0xc)) goto LAB_002e85b8;
        }
        iVar2 = FUN_0033f428(5,0x40,0x138,0x1a,2);
        if (iVar2 == 0) {
          iVar2 = FUN_0033f428(0x13,0x5a,0x104,0x1a,2);
          if (iVar2 == 0) {
            iVar2 = FUN_0033f428(0x1f,0x74,0xea,0x1a,2);
            if (iVar2 == 0) {
              iVar2 = FUN_0033f428(0x2b,0x8e,0x104,0x1a,2);
              if (iVar2 == 0) {
                iVar3 = FUN_0033f428(0x123,0x5c,0x1a,0x34,2);
                if (iVar3 == 0) {
                  iVar3 = FUN_0033f428(5,0x74,0x1a,0x1a,2);
                  if (iVar3 == 0) {
                    iVar3 = FUN_0033f428(2,0x8c,0x1c,0x1a,2);
                    if (iVar3 == 0) {
                      iVar3 = FUN_0033f428(0x39,0xa8,0x1a,0x1a,2);
                      if (iVar3 == 0) {
                        iVar3 = FUN_0033f428(0x53,0xa8,0x1a,0x1a,2);
                        if (iVar3 == 0) {
                          iVar3 = FUN_0033f428(0x6b,0xa8,0x80,0x1a,2);
                          if (iVar3 == 0) {
                            iVar3 = FUN_0033f428(0xef,0xa8,0x1a,0x1a,2);
                            if (iVar3 == 0) {
                              iVar3 = FUN_0033f428(0x109,0xa8,0x1a,0x1a,2);
                              if (iVar3 == 0) {
                                if (local_30[0] != '\0') {
                                  return;
                                }
                                goto LAB_002e8e2c;
                              }
                              iVar3 = *(int *)(iVar1 + 0x10);
                              bVar6 = iVar3 == 4;
                              if (bVar6) {
                                iVar3 = *(int *)(iVar1 + 0x14);
                              }
                              if (!bVar6 || iVar3 != 4) {
                                return;
                              }
                            }
                            else {
                              iVar3 = *(int *)(iVar1 + 0x10);
                              bVar6 = iVar3 == 3;
                              if (bVar6) {
                                iVar3 = *(int *)(iVar1 + 0x14);
                              }
                              if (!bVar6 || iVar3 != 4) {
                                return;
                              }
                            }
                          }
                          else {
                            iVar3 = *(int *)(iVar1 + 0x10);
                            bVar6 = iVar3 == 2;
                            if (bVar6) {
                              iVar3 = *(int *)(iVar1 + 0x14);
                            }
                            if (!bVar6 || iVar3 != 4) {
                              return;
                            }
                          }
                        }
                        else {
                          iVar3 = *(int *)(iVar1 + 0x10);
                          bVar6 = iVar3 == 1;
                          if (bVar6) {
                            iVar3 = *(int *)(iVar1 + 0x14);
                          }
                          if (!bVar6 || iVar3 != 4) {
                            return;
                          }
                        }
                      }
                      else {
                        iVar3 = *(int *)(iVar1 + 0x10);
                        bVar6 = iVar3 == 0;
                        if (bVar6) {
                          iVar3 = *(int *)(iVar1 + 0x14);
                        }
                        if (!bVar6 || iVar3 != 4) {
                          return;
                        }
                      }
                    }
                    else {
                      iVar3 = *(int *)(iVar1 + 0x10);
                      bVar6 = iVar3 == -1;
                      if (bVar6) {
                        iVar3 = *(int *)(iVar1 + 0x14);
                      }
                      if (!bVar6 || iVar3 != 3) {
                        return;
                      }
                    }
                  }
                  else {
                    iVar3 = *(int *)(iVar1 + 0x10);
                    bVar6 = iVar3 == -1;
                    if (bVar6) {
                      iVar3 = *(int *)(iVar1 + 0x14);
                    }
                    if (!bVar6 || iVar3 != 2) {
                      return;
                    }
                  }
                }
                else {
                  iVar3 = *(int *)(iVar1 + 0x10);
                  bVar6 = iVar3 == 10;
                  if (bVar6) {
                    iVar3 = *(int *)(iVar1 + 0x14);
                  }
                  if (!bVar6 || iVar3 != 1) {
                    return;
                  }
                }
              }
              else {
                iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x2b)) >>
                             0x20);
                if ((iVar3 >> 3) - (iVar3 >> 0x1f) != *(int *)(iVar1 + 0x34)) {
                  return;
                }
              }
            }
            else {
              iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x1f)) >>
                           0x20);
              if ((iVar3 >> 3) - (iVar3 >> 0x1f) != *(int *)(iVar1 + 0x34)) {
                return;
              }
            }
          }
          else {
            iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x13)) >> 0x20
                         );
            if ((iVar3 >> 3) - (iVar3 >> 0x1f) != *(int *)(iVar1 + 0x34)) {
              return;
            }
          }
        }
        else {
          iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 5)) >> 0x20);
          if ((iVar3 >> 3) - (iVar3 >> 0x1f) != *(int *)(iVar1 + 0x34)) {
            return;
          }
        }
        goto LAB_002e944c;
      }
      if (iVar2 == 3) {
        iVar2 = FUN_0033f428(0x1f,0x28,0x80,0x18,2);
        if (iVar2 == 0) {
          iVar2 = FUN_0033f428(0x1f,0x42,0x104,0x82,2);
          if (iVar2 == 0) {
            iVar2 = FUN_0033f428(5,0x42,0x1a,0x82,2);
            if (iVar2 == 0) {
              iVar3 = FUN_0033f428(0x123,0x42,0x1a,0x1a,2);
              if (iVar3 == 0) {
                iVar3 = FUN_0033f428(0x123,0x5c,0x1a,0x34,2);
                if (iVar3 == 0) {
                  iVar3 = FUN_0033f428(0x123,0x90,0x1a,0x34,2);
                  if (iVar3 == 0) {
                    if (local_30[0] != '\0') {
                      return;
                    }
                    goto LAB_002e8e2c;
                  }
                  iVar3 = *(int *)(iVar1 + 0x10);
                  bVar6 = iVar3 == 10;
                  if (bVar6) {
                    iVar3 = *(int *)(iVar1 + 0x14);
                  }
                  if (!bVar6 || iVar3 != 3) {
                    return;
                  }
                }
                else {
                  iVar3 = *(int *)(iVar1 + 0x10);
                  bVar6 = iVar3 == 10;
                  if (bVar6) {
                    iVar3 = *(int *)(iVar1 + 0x14);
                  }
                  if (!bVar6 || iVar3 != 1) {
                    return;
                  }
                }
              }
              else {
                iVar3 = *(int *)(iVar1 + 0x10);
                bVar6 = iVar3 == 10;
                if (bVar6) {
                  iVar3 = *(int *)(iVar1 + 0x14);
                }
                if (!bVar6 || iVar3 != 0) {
                  return;
                }
              }
            }
            else {
              iVar2 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x39)) >>
                           0x20);
              iVar2 = (iVar2 >> 3) - (iVar2 >> 0x1f);
              iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_2c[0] - 0x42)) >>
                           0x20);
              bVar6 = iVar2 == *(int *)(iVar1 + 0x34);
              if (bVar6) {
                iVar2 = *(int *)(iVar1 + 0x38);
              }
              if (!bVar6 || (iVar3 >> 3) - (iVar3 >> 0x1f) != iVar2) {
                return;
              }
            }
          }
          else {
            iVar2 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x1f)) >> 0x20
                         );
            iVar2 = (iVar2 >> 3) - (iVar2 >> 0x1f);
            iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_2c[0] - 0x42)) >> 0x20
                         );
            bVar6 = iVar2 == *(int *)(iVar1 + 0x34);
            if (bVar6) {
              iVar2 = *(int *)(iVar1 + 0x38);
            }
            if (!bVar6 || (iVar3 >> 3) - (iVar3 >> 0x1f) != iVar2) {
              return;
            }
          }
          goto LAB_002e944c;
        }
        if (*(int *)(iVar1 + 0x30) != -2) {
          return;
        }
        goto LAB_002e85b8;
      }
    }
    if (iVar2 != 4) {
      return;
    }
    iVar3 = FUN_0033f428(0x24,0x60,0x78,0x30,2);
    if (iVar3 == 0) {
      iVar3 = FUN_0033f428(0xa4,0x60,0x78,0x30,2);
      if (iVar3 == 0) {
        if (local_30[0] != '\0') {
          return;
        }
LAB_002e8e2c:
        *(undefined4 *)(iVar1 + 0x30) = 0xffffffff;
        return;
      }
      if (*(int *)(iVar1 + 0x2c) != 1) {
        return;
      }
    }
    else if (*(int *)(iVar1 + 0x2c) != 0) {
      return;
    }
LAB_002e944c:
    *(undefined4 *)(iVar1 + 0x30) = 1;
    return;
  }
  uVar5 = 0;
  if (iVar2 < 4) {
    iVar2 = FUN_0033f428(4,0xcc,0x60,0x20,0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x30) = 0xfffffff6;
      *(undefined4 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 5;
    }
    iVar2 = FUN_0033f428(0xdc,0xcc,0x60,0x20,0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x30) = 0xfffffff5;
      *(undefined4 *)(iVar1 + 0x28) = 1;
      *(undefined4 *)(iVar1 + 0x14) = 5;
    }
  }
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 < 2) {
    iVar2 = FUN_0033f428(0xa1,0x28,0x80,0x18,0);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x30) = 0xfffffffe;
      return;
    }
    iVar2 = FUN_0033f428(0x1f,0x42,0x101,0x7f,0);
    if (iVar2 != 0) {
      iVar2 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x1f)) >> 0x20);
      iVar2 = (iVar2 >> 3) - (iVar2 >> 0x1f);
      *(int *)(iVar1 + 0x34) = iVar2;
      *(int *)(iVar1 + 0x10) = iVar2;
      iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_2c[0] - 0x42)) >> 0x20);
      iVar3 = (iVar3 >> 3) - (iVar3 >> 0x1f);
      *(int *)(iVar1 + 0x38) = iVar3;
      *(int *)(iVar1 + 0x14) = iVar3;
      *(undefined4 *)(iVar1 + 0x30) = 0;
      return;
    }
    iVar2 = FUN_0033f428(9,0x42,0x1a,0x82,0);
    if (iVar2 != 0) {
      iVar2 = local_28[0] - 0x39;
LAB_002e8a4c:
      iVar2 = (int)((ulonglong)((longlong)iVar3 * (longlong)iVar2) >> 0x20);
      iVar2 = (iVar2 >> 3) - (iVar2 >> 0x1f);
      *(int *)(iVar1 + 0x34) = iVar2;
      *(int *)(iVar1 + 0x10) = iVar2;
      iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_2c[0] - 0x42)) >> 0x20);
      iVar3 = (iVar3 >> 3) - (iVar3 >> 0x1f);
      *(int *)(iVar1 + 0x38) = iVar3;
      *(int *)(iVar1 + 0x14) = iVar3;
LAB_002e85b8:
      *(undefined4 *)(iVar1 + 0x30) = uVar5;
      return;
    }
    iVar3 = FUN_0033f428(0x123,0x42,0x1a,0x1a,0);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar1 + 0x34) = 10;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 10;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      goto LAB_002e85b8;
    }
    iVar3 = FUN_0033f428(0x123,0x5c,0x18,0x32,0);
    if (iVar3 != 0) {
LAB_002e8b20:
      *(undefined4 *)(iVar1 + 0x34) = 10;
      *(undefined4 *)(iVar1 + 0x38) = 1;
      *(undefined4 *)(iVar1 + 0x10) = 10;
      uVar5 = 0xfffffff7;
      *(undefined4 *)(iVar1 + 0x14) = 1;
      goto LAB_002e8618;
    }
    iVar3 = FUN_0033f428(0x123,0x90,0x18,0x32,0);
  }
  else {
    if (iVar2 == 2) {
      if (*(int *)(iVar1 + 0x40) == 0) {
        iVar2 = FUN_0033f428(0x1f,0x28,0x80,0x18,0);
        if (iVar2 != 0) {
          uVar5 = 0xfffffffd;
          *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
          goto LAB_002e8618;
        }
      }
      else {
        iVar2 = FUN_0033f428(0xa1,0x28,0x80,0x18,0);
        if (iVar2 != 0) {
          uVar5 = 0xfffffff4;
          *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
          goto LAB_002e8618;
        }
      }
      iVar2 = FUN_0033f428(5,0x40,0x138,0x18,0);
      if (iVar2 != 0) {
        iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 5)) >> 0x20);
        iVar3 = (iVar3 >> 3) - (iVar3 >> 0x1f);
        *(int *)(iVar1 + 0x34) = iVar3;
        *(int *)(iVar1 + 0x10) = iVar3;
        *(undefined4 *)(iVar1 + 0x38) = 0;
        *(undefined4 *)(iVar1 + 0x14) = 0;
        goto LAB_002e85b8;
      }
      iVar2 = FUN_0033f428(0x13,0x5a,0x102,0x1a,0);
      if (iVar2 != 0) {
        iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x13)) >> 0x20);
        iVar3 = (iVar3 >> 3) - (iVar3 >> 0x1f);
        *(int *)(iVar1 + 0x34) = iVar3;
        *(int *)(iVar1 + 0x10) = iVar3;
        *(undefined4 *)(iVar1 + 0x38) = 1;
        *(undefined4 *)(iVar1 + 0x14) = 1;
        goto LAB_002e85b8;
      }
      iVar2 = FUN_0033f428(0x1f,0x74,0xe8,0x1a,0);
      if (iVar2 != 0) {
        iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x1f)) >> 0x20);
        iVar3 = (iVar3 >> 3) - (iVar3 >> 0x1f);
        *(int *)(iVar1 + 0x34) = iVar3;
        *(int *)(iVar1 + 0x10) = iVar3;
        *(undefined4 *)(iVar1 + 0x38) = 2;
        *(undefined4 *)(iVar1 + 0x14) = 2;
        goto LAB_002e85b8;
      }
      iVar2 = FUN_0033f428(0x2b,0x8e,0x102,0x1a,0);
      if (iVar2 != 0) {
        iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x2b)) >> 0x20);
        iVar3 = (iVar3 >> 3) - (iVar3 >> 0x1f);
        *(int *)(iVar1 + 0x34) = iVar3;
        *(int *)(iVar1 + 0x10) = iVar3;
        *(undefined4 *)(iVar1 + 0x38) = 3;
        *(undefined4 *)(iVar1 + 0x14) = 3;
        goto LAB_002e85b8;
      }
      iVar3 = FUN_0033f428(0x123,0x5c,0x18,0x34,0);
      if (iVar3 == 0) {
        iVar3 = FUN_0033f428(5,0x74,0x18,0x1a,0);
        if (iVar3 == 0) {
          iVar3 = FUN_0033f428(2,0x8c,0x1a,0x1a,0);
          if (iVar3 != 0) {
            *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
            *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
            *(undefined4 *)(iVar1 + 0x38) = 3;
            uVar5 = 0xfffffffb;
            *(undefined4 *)(iVar1 + 0x14) = 3;
            goto LAB_002e8618;
          }
          iVar3 = FUN_0033f428(0x39,0xa8,0x18,0x1a,0);
          if (iVar3 == 0) {
            iVar3 = FUN_0033f428(0x53,0xa8,0x18,0x1a,0);
            if (iVar3 == 0) {
              iVar3 = FUN_0033f428(0x6b,0xa8,0x7e,0x1a,0);
              if (iVar3 != 0) {
                *(undefined4 *)(iVar1 + 0x34) = 2;
                *(undefined4 *)(iVar1 + 0x10) = 2;
                *(undefined4 *)(iVar1 + 0x38) = 4;
                uVar5 = 0xfffffff9;
                *(undefined4 *)(iVar1 + 0x14) = 4;
                goto LAB_002e8618;
              }
              iVar3 = FUN_0033f428(0xef,0xa8,0x18,0x1a,0);
              if (iVar3 == 0) {
                iVar3 = FUN_0033f428(0x109,0xa8,0x18,0x1a,0);
                if (iVar3 == 0) {
                  return;
                }
                *(undefined4 *)(iVar1 + 0x34) = 4;
                *(undefined4 *)(iVar1 + 0x10) = 4;
                *(undefined4 *)(iVar1 + 0x38) = 4;
                *(undefined4 *)(iVar1 + 0x14) = 4;
              }
              else {
                *(undefined4 *)(iVar1 + 0x34) = 3;
                *(undefined4 *)(iVar1 + 0x38) = 4;
                *(undefined4 *)(iVar1 + 0x10) = 3;
                *(undefined4 *)(iVar1 + 0x14) = 4;
              }
            }
            else {
              *(undefined4 *)(iVar1 + 0x34) = 1;
              *(undefined4 *)(iVar1 + 0x10) = 1;
              *(undefined4 *)(iVar1 + 0x38) = 4;
              *(undefined4 *)(iVar1 + 0x14) = 4;
            }
          }
          else {
            *(undefined4 *)(iVar1 + 0x34) = 0;
            *(undefined4 *)(iVar1 + 0x10) = 0;
            *(undefined4 *)(iVar1 + 0x38) = 4;
            *(undefined4 *)(iVar1 + 0x14) = 4;
          }
        }
        else {
          *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0x38) = 2;
          *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
          *(undefined4 *)(iVar1 + 0x14) = 2;
        }
        goto LAB_002e85b8;
      }
      *(undefined4 *)(iVar1 + 0x34) = 10;
      *(undefined4 *)(iVar1 + 0x38) = 1;
      *(undefined4 *)(iVar1 + 0x10) = 10;
      uVar5 = 0xfffffffa;
      *(undefined4 *)(iVar1 + 0x14) = 1;
      goto LAB_002e8618;
    }
    if (iVar2 != 3) {
      if (iVar2 != 4) {
        return;
      }
      iVar3 = FUN_0033f428(0x24,0x60,0x78,0x30,1);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar1 + 0x30) = 0;
        *(undefined4 *)(iVar1 + 0x2c) = 0;
      }
      iVar3 = FUN_0033f428(0xa4,0x60,0x78,0x30,1);
      if (iVar3 != 0) {
        *(undefined4 *)(iVar1 + 0x2c) = 1;
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      return;
    }
    iVar2 = FUN_0033f428(0x1f,0x28,0x80,0x18,0);
    if (iVar2 != 0) {
      uVar5 = 0xfffffffe;
      *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
      goto LAB_002e8618;
    }
    iVar2 = FUN_0033f428(0x1f,0x42,0x104,0x82,0);
    if (iVar2 != 0) {
      iVar2 = local_28[0] - 0x1f;
      iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)iVar2) >> 0x20);
      if (((iVar4 >> 3) - (iVar4 >> 0x1f) == 9) &&
         (iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_2c[0] - 0x42)) >> 0x20),
         (iVar4 >> 3) - (iVar4 >> 0x1f) == 4)) {
        return;
      }
      goto LAB_002e8a4c;
    }
    iVar2 = FUN_0033f428(5,0x42,0x1a,0x82,0);
    if (iVar2 != 0) {
      iVar2 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_28[0] - 0x39)) >> 0x20);
      iVar2 = (iVar2 >> 3) - (iVar2 >> 0x1f);
      *(int *)(iVar1 + 0x34) = iVar2;
      *(int *)(iVar1 + 0x10) = iVar2;
      iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)(local_2c[0] - 0x42)) >> 0x20);
      iVar3 = (iVar3 >> 3) - (iVar3 >> 0x1f);
      *(int *)(iVar1 + 0x38) = iVar3;
      *(int *)(iVar1 + 0x14) = iVar3;
      *(undefined4 *)(iVar1 + 0x30) = 0;
      if (iVar2 < -1) {
        *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
        *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
      }
      return;
    }
    iVar3 = FUN_0033f428(0x123,0x5c,0x18,0x32,0);
    if (iVar3 != 0) goto LAB_002e8b20;
    iVar3 = FUN_0033f428(0x123,0x90,0x18,0x32,0);
  }
  if (iVar3 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x34) = 10;
  *(undefined4 *)(iVar1 + 0x10) = 10;
  *(undefined4 *)(iVar1 + 0x38) = 3;
  uVar5 = 0xfffffff8;
  *(undefined4 *)(iVar1 + 0x14) = 3;
LAB_002e8618:
  *(undefined4 *)(iVar1 + 0x30) = uVar5;
  return;
}
