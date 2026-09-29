// OoT3D decomp @ 00304a60  name=FUN_00304a60  size=1884

void FUN_00304a60(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  bool bVar14;
  byte *local_38;

  *param_1 = *(undefined4 *)(param_2 + 0x14);
  iVar3 = *(int *)(param_2 + 0x14);
  iVar6 = *(int *)(iVar3 + 8);
  bVar14 = *param_3 == iVar6;
  if (bVar14) {
    iVar6 = *param_4;
  }
  if ((bVar14 && iVar6 == iVar3) && (*(int *)(param_2 + 0x18) != 0)) {
    iVar6 = *(int *)(iVar3 + 4);
    while (iVar6 != 0) {
      FUN_002bd194(param_2,*(undefined4 *)(iVar6 + 0xc));
      iVar3 = *(int *)(iVar6 + 8);
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(param_2 + 8);
      FUN_002bd70c(iVar6 + 0x14);
      *(int *)(param_2 + 8) = iVar6;
      iVar6 = iVar3;
    }
    *(int *)(*(int *)(param_2 + 0x14) + 8) = *(int *)(param_2 + 0x14);
    *(undefined4 *)(*(int *)(param_2 + 0x14) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x14) + 0xc) = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x14);
  }
  else {
    while (pbVar7 = (byte *)*param_3, pbVar7 != (byte *)*param_4) {
      iVar6 = *(int *)(pbVar7 + 0xc);
      pbVar8 = pbVar7;
      if (iVar6 == 0) {
        while( true ) {
          pbVar8 = *(byte **)(pbVar8 + 4);
          if (*param_3 != *(int *)(pbVar8 + 0xc)) break;
          *param_3 = (int)pbVar8;
        }
        if (*(byte **)(*param_3 + 0xc) != pbVar8) {
          *param_3 = (int)pbVar8;
        }
      }
      else {
        do {
          *param_3 = iVar6;
          iVar6 = *(int *)(iVar6 + 8);
        } while (iVar6 != 0);
      }
      local_38 = *(byte **)(param_2 + 0x14);
      if (pbVar7 != local_38) {
        pbVar8 = *(byte **)(pbVar7 + 0xc);
        pbVar10 = pbVar8;
        if (pbVar8 == (byte *)0x0) {
          pbVar11 = pbVar7;
          for (pbVar10 = *(byte **)(pbVar7 + 4); pbVar11 == *(byte **)(pbVar10 + 0xc);
              pbVar10 = *(byte **)(pbVar10 + 4)) {
            pbVar11 = pbVar10;
          }
          if (*(byte **)(pbVar11 + 0xc) != pbVar10) {
            pbVar11 = pbVar10;
          }
        }
        else {
          do {
            pbVar11 = pbVar10;
            pbVar10 = *(byte **)(pbVar11 + 8);
          } while (*(byte **)(pbVar11 + 8) != (byte *)0x0);
        }
        pbVar4 = *(byte **)(pbVar7 + 8);
        pbVar10 = pbVar7;
        if (pbVar4 == (byte *)0x0) {
          pbVar5 = pbVar8;
          if (pbVar8 != (byte *)0x0) goto LAB_00304c94;
          pbVar5 = *(byte **)(pbVar7 + 4);
          if (local_38 == pbVar5) {
            *(byte **)(local_38 + 0xc) = pbVar5;
            *(byte **)(*(int *)(param_2 + 0x14) + 8) = pbVar5;
            *(undefined4 *)(*(int *)(param_2 + 0x14) + 4) = 0;
          }
          else if (*(byte **)(pbVar5 + 8) == pbVar7) {
            pbVar5[8] = 0;
            pbVar5[9] = 0;
            pbVar5[10] = 0;
            pbVar5[0xb] = 0;
            if (*(byte **)(*(int *)(param_2 + 0x14) + 8) == pbVar7) {
              *(byte **)(*(int *)(param_2 + 0x14) + 8) = pbVar5;
            }
          }
          else {
            pbVar5[0xc] = 0;
            pbVar5[0xd] = 0;
            pbVar5[0xe] = 0;
            pbVar5[0xf] = 0;
            if (*(byte **)(*(int *)(param_2 + 0x14) + 0xc) == pbVar7) {
              *(byte **)(*(int *)(param_2 + 0x14) + 0xc) = pbVar5;
            }
          }
        }
        else {
          pbVar5 = pbVar4;
          if (pbVar8 != (byte *)0x0) {
            do {
              pbVar10 = pbVar8;
              pbVar8 = *(byte **)(pbVar10 + 8);
            } while (*(byte **)(pbVar10 + 8) != (byte *)0x0);
            pbVar5 = *(byte **)(pbVar10 + 0xc);
          }
LAB_00304c94:
          if (pbVar10 == pbVar7) {
            *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar10 + 4);
            if (*(byte **)(*(int *)(param_2 + 0x14) + 4) == pbVar7) {
              *(byte **)(*(int *)(param_2 + 0x14) + 4) = pbVar5;
            }
            else {
              iVar6 = *(int *)(pbVar7 + 4);
              if (*(byte **)(iVar6 + 8) == pbVar7) {
                *(byte **)(iVar6 + 8) = pbVar5;
              }
              else {
                *(byte **)(iVar6 + 0xc) = pbVar5;
              }
            }
            iVar6 = *(int *)(param_2 + 0x14);
            if (*(byte **)(iVar6 + 8) == pbVar7) {
              pbVar8 = pbVar5;
              if (*(int *)(pbVar7 + 0xc) == 0) {
                *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(pbVar7 + 4);
              }
              else {
                do {
                  pbVar4 = pbVar8;
                  pbVar8 = *(byte **)(pbVar4 + 8);
                } while (pbVar8 != (byte *)0x0);
                *(byte **)(iVar6 + 8) = pbVar4;
              }
            }
            iVar6 = *(int *)(param_2 + 0x14);
            if (*(byte **)(iVar6 + 0xc) == pbVar7) {
              pbVar8 = pbVar5;
              if (*(int *)(pbVar7 + 8) == 0) {
                *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(pbVar7 + 4);
              }
              else {
                do {
                  pbVar7 = pbVar8;
                  pbVar8 = *(byte **)(pbVar7 + 0xc);
                } while (pbVar8 != (byte *)0x0);
                *(byte **)(iVar6 + 0xc) = pbVar7;
              }
            }
          }
          else {
            *(byte **)(pbVar4 + 4) = pbVar10;
            *(undefined4 *)(pbVar10 + 8) = *(undefined4 *)(pbVar7 + 8);
            if (*(byte **)(pbVar7 + 0xc) == pbVar10) {
              if (pbVar5 != (byte *)0x0) {
                *(byte **)(pbVar5 + 4) = pbVar10;
              }
            }
            else {
              if (pbVar5 != (byte *)0x0) {
                *(undefined4 *)(pbVar5 + 4) = *(undefined4 *)(pbVar10 + 4);
              }
              *(byte **)(*(int *)(pbVar10 + 4) + 8) = pbVar5;
              *(undefined4 *)(pbVar10 + 0xc) = *(undefined4 *)(pbVar7 + 0xc);
              *(byte **)(*(int *)(pbVar7 + 0xc) + 4) = pbVar10;
            }
            if (*(byte **)(*(int *)(param_2 + 0x14) + 4) == pbVar7) {
              *(byte **)(*(int *)(param_2 + 0x14) + 4) = pbVar10;
            }
            else {
              iVar6 = *(int *)(pbVar7 + 4);
              if (*(byte **)(iVar6 + 8) == pbVar7) {
                *(byte **)(iVar6 + 8) = pbVar10;
              }
              else {
                *(byte **)(iVar6 + 0xc) = pbVar10;
              }
            }
            if (pbVar5 == (byte *)0x0) {
              pbVar5 = pbVar10;
            }
            *(undefined4 *)(pbVar10 + 4) = *(undefined4 *)(pbVar7 + 4);
            bVar1 = *pbVar10;
            *pbVar10 = *pbVar7;
            *pbVar7 = bVar1;
            pbVar10 = pbVar7;
          }
        }
        pbVar7 = *(byte **)(param_2 + 0x14);
        bVar14 = pbVar7 != pbVar5;
        if (bVar14) {
          pbVar7 = (byte *)(uint)*pbVar10;
        }
        if (bVar14 && pbVar7 != (byte *)0x0) {
          while( true ) {
            if ((*(byte **)(*(int *)(param_2 + 0x14) + 4) == pbVar5) || (*pbVar5 != 1))
            goto LAB_00305090;
            pbVar7 = *(byte **)(pbVar5 + 4);
            pbVar4 = pbVar5 + 4;
            pbVar8 = *(byte **)(pbVar7 + 8);
            if (pbVar8 != pbVar5) break;
            pbVar8 = *(byte **)(pbVar7 + 0xc);
            if (pbVar8 == (byte *)0x0) {
LAB_00304fbc:
              *pbVar5 = 0;
              pbVar5 = pbVar7;
            }
            else {
              pbVar7 = (byte *)(uint)*pbVar8;
              if (pbVar7 == (byte *)0x0) {
                *pbVar8 = 1;
                **(undefined1 **)(pbVar5 + 4) = 0;
                iVar6 = *(int *)pbVar4;
                iVar3 = *(int *)(iVar6 + 0xc);
                *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 8);
                if (*(int *)(iVar3 + 8) != 0) {
                  *(int *)(*(int *)(iVar3 + 8) + 4) = iVar6;
                }
                *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar6 + 4);
                if (*(int *)(*(int *)(param_2 + 0x14) + 4) == iVar6) {
                  *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar3;
                }
                else {
                  iVar12 = *(int *)(iVar6 + 4);
                  if (*(int *)(iVar12 + 8) == iVar6) {
                    *(int *)(iVar12 + 8) = iVar3;
                  }
                  else {
                    *(int *)(iVar12 + 0xc) = iVar3;
                  }
                }
                *(int *)(iVar3 + 8) = iVar6;
                *(int *)(iVar6 + 4) = iVar3;
                pbVar7 = *(byte **)(pbVar5 + 4);
                pbVar8 = *(byte **)(pbVar7 + 0xc);
                if (pbVar8 == (byte *)0x0) goto LAB_00304fbc;
              }
              pbVar13 = *(byte **)(pbVar8 + 8);
              if (pbVar13 != (byte *)0x0) {
                pbVar7 = (byte *)(uint)*pbVar13;
              }
              if (pbVar13 != (byte *)0x0 && pbVar7 != (byte *)0x1) {
LAB_00304ec0:
                pcVar9 = *(char **)(pbVar8 + 0xc);
                cVar2 = '\0';
                if (pcVar9 != (char *)0x0) {
                  cVar2 = *pcVar9;
                }
                if (pcVar9 == (char *)0x0 || cVar2 == '\x01') {
                  if (pbVar13 != (byte *)0x0) {
                    *pbVar13 = 1;
                  }
                  *pbVar8 = 0;
                  iVar6 = *(int *)(pbVar8 + 8);
                  *(undefined4 *)(pbVar8 + 8) = *(undefined4 *)(iVar6 + 0xc);
                  if (*(int *)(iVar6 + 0xc) != 0) {
                    *(byte **)(*(int *)(iVar6 + 0xc) + 4) = pbVar8;
                  }
                  *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(pbVar8 + 4);
                  if (*(byte **)(*(int *)(param_2 + 0x14) + 4) == pbVar8) {
                    *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar6;
                  }
                  else {
                    iVar3 = *(int *)(pbVar8 + 4);
                    if (*(byte **)(iVar3 + 0xc) == pbVar8) {
                      *(int *)(iVar3 + 0xc) = iVar6;
                    }
                    else {
                      *(int *)(iVar3 + 8) = iVar6;
                    }
                  }
                  *(byte **)(iVar6 + 0xc) = pbVar8;
                  *(int *)(pbVar8 + 4) = iVar6;
                  pbVar8 = *(byte **)(*(int *)(pbVar5 + 4) + 0xc);
                  if (pbVar8 == (byte *)0x0) goto LAB_00305090;
                }
                *pbVar8 = **(byte **)(pbVar5 + 4);
                **(undefined1 **)pbVar4 = 1;
                if (*(undefined1 **)(pbVar8 + 0xc) != (undefined1 *)0x0) {
                  **(undefined1 **)(pbVar8 + 0xc) = 1;
                }
                iVar6 = *(int *)(pbVar5 + 4);
                iVar3 = *(int *)(iVar6 + 0xc);
                *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 8);
                if (*(int *)(iVar3 + 8) != 0) {
                  *(int *)(*(int *)(iVar3 + 8) + 4) = iVar6;
                }
                *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar6 + 4);
                if (*(int *)(*(int *)(param_2 + 0x14) + 4) == iVar6) {
                  *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar3;
                }
                else {
                  iVar12 = *(int *)(iVar6 + 4);
                  if (*(int *)(iVar12 + 8) == iVar6) {
                    *(int *)(iVar12 + 8) = iVar3;
                  }
                  else {
                    *(int *)(iVar12 + 0xc) = iVar3;
                  }
                }
                *(int *)(iVar3 + 8) = iVar6;
                goto LAB_003051b4;
              }
              pcVar9 = *(char **)(pbVar8 + 0xc);
              cVar2 = '\0';
              if (pcVar9 != (char *)0x0) {
                cVar2 = *pcVar9;
              }
              if (pcVar9 != (char *)0x0 && cVar2 != '\x01') goto LAB_00304ec0;
LAB_0030506c:
              *pbVar8 = 0;
              pbVar5 = *(byte **)(pbVar5 + 4);
            }
          }
          if (pbVar8 == (byte *)0x0) goto LAB_00304fbc;
          pbVar7 = (byte *)(uint)*pbVar8;
          if (pbVar7 == (byte *)0x0) {
            *pbVar8 = 1;
            **(undefined1 **)(pbVar5 + 4) = 0;
            iVar6 = *(int *)pbVar4;
            iVar3 = *(int *)(iVar6 + 8);
            *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 0xc) != 0) {
              *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar6;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar6 + 4);
            if (*(int *)(*(int *)(param_2 + 0x14) + 4) == iVar6) {
              *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar3;
            }
            else {
              iVar12 = *(int *)(iVar6 + 4);
              if (*(int *)(iVar12 + 0xc) == iVar6) {
                *(int *)(iVar12 + 0xc) = iVar3;
              }
              else {
                *(int *)(iVar12 + 8) = iVar3;
              }
            }
            *(int *)(iVar3 + 0xc) = iVar6;
            *(int *)(iVar6 + 4) = iVar3;
            pbVar7 = *(byte **)(pbVar5 + 4);
            pbVar8 = *(byte **)(pbVar7 + 8);
            if (pbVar8 == (byte *)0x0) goto LAB_00304fbc;
          }
          pbVar13 = *(byte **)(pbVar8 + 0xc);
          if (pbVar13 != (byte *)0x0) {
            pbVar7 = (byte *)(uint)*pbVar13;
          }
          if (pbVar13 == (byte *)0x0 || pbVar7 == (byte *)0x1) {
            pcVar9 = *(char **)(pbVar8 + 8);
            cVar2 = '\0';
            if (pcVar9 != (char *)0x0) {
              cVar2 = *pcVar9;
            }
            if (pcVar9 == (char *)0x0 || cVar2 == '\x01') goto LAB_0030506c;
          }
          pcVar9 = *(char **)(pbVar8 + 8);
          cVar2 = '\0';
          if (pcVar9 != (char *)0x0) {
            cVar2 = *pcVar9;
          }
          if (pcVar9 != (char *)0x0 && cVar2 != '\x01') {
LAB_00305144:
            *pbVar8 = **(byte **)(pbVar5 + 4);
            **(undefined1 **)pbVar4 = 1;
            if (*(undefined1 **)(pbVar8 + 8) != (undefined1 *)0x0) {
              **(undefined1 **)(pbVar8 + 8) = 1;
            }
            iVar6 = *(int *)(pbVar5 + 4);
            iVar3 = *(int *)(iVar6 + 8);
            *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar3 + 0xc);
            if (*(int *)(iVar3 + 0xc) != 0) {
              *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar6;
            }
            *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar6 + 4);
            if (*(int *)(*(int *)(param_2 + 0x14) + 4) == iVar6) {
              *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar3;
            }
            else {
              iVar12 = *(int *)(iVar6 + 4);
              if (*(int *)(iVar12 + 0xc) == iVar6) {
                *(int *)(iVar12 + 0xc) = iVar3;
              }
              else {
                *(int *)(iVar12 + 8) = iVar3;
              }
            }
            *(int *)(iVar3 + 0xc) = iVar6;
LAB_003051b4:
            *(int *)(iVar6 + 4) = iVar3;
          }
          else {
            if (pbVar13 != (byte *)0x0) {
              *pbVar13 = 1;
            }
            *pbVar8 = 0;
            iVar6 = *(int *)(pbVar8 + 0xc);
            *(undefined4 *)(pbVar8 + 0xc) = *(undefined4 *)(iVar6 + 8);
            if (*(int *)(iVar6 + 8) != 0) {
              *(byte **)(*(int *)(iVar6 + 8) + 4) = pbVar8;
            }
            *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(pbVar8 + 4);
            if (*(byte **)(*(int *)(param_2 + 0x14) + 4) == pbVar8) {
              *(int *)(*(int *)(param_2 + 0x14) + 4) = iVar6;
            }
            else {
              iVar3 = *(int *)(pbVar8 + 4);
              if (*(byte **)(iVar3 + 8) == pbVar8) {
                *(int *)(iVar3 + 8) = iVar6;
              }
              else {
                *(int *)(iVar3 + 0xc) = iVar6;
              }
            }
            *(byte **)(iVar6 + 8) = pbVar8;
            *(int *)(pbVar8 + 4) = iVar6;
            pbVar8 = *(byte **)(*(int *)(pbVar5 + 4) + 8);
            if (pbVar8 != (byte *)0x0) goto LAB_00305144;
          }
LAB_00305090:
          *pbVar5 = 1;
        }
        *(undefined4 *)(pbVar10 + 0xc) = *(undefined4 *)(param_2 + 8);
        FUN_002bd70c(pbVar10 + 0x14);
        *(byte **)(param_2 + 8) = pbVar10;
        *(int *)(param_2 + 0x18) = *(int *)(param_2 + 0x18) + -1;
        local_38 = pbVar11;
      }
      *param_1 = local_38;
    }
  }
  return;
}
