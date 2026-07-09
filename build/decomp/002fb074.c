// OoT3D decomp @ 002fb074  name=FUN_002fb074  size=2064

void FUN_002fb074(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  code *pcVar12;
  bool bVar13;
  int local_28;
  
  puVar2 = puRam002fb8d8;
  piVar1 = piRam002fb8d4;
  piVar10 = (int *)0x0;
  puVar11 = (uint *)*puRam002fb8cc;
  iVar7 = *piRam002fb8d4 + (param_2 & 0x1ff) * 4;
  iVar6 = param_1 - iRam002fb8d0;
  pcVar12 = (code *)*puRam002fb8d8;
  local_28 = param_4;
  if (param_1 != iRam002fb8d0) {
    if (param_1 < iRam002fb8d0) {
      if (param_1 != iRam002fb8dc) {
        if (iRam002fb8dc <= param_1) {
          switch(param_1 - iRam002fb8dc) {
          default:
            goto switchD_002fb13c_caseD_0;
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            goto switchD_002fb13c_caseD_1;
          }
        }
        iVar6 = param_1 - iRam002fb8e0;
        if (param_1 != iRam002fb8e0) {
          if (param_1 < iRam002fb8e0) {
            if (param_1 == 0xde1) {
              if (puVar11[puVar11[0x16] + 0x17] == param_2) {
                return;
              }
              if (param_2 != 0) {
                for (piVar10 = *(int **)(iVar7 + 0x10); piVar10 != (int *)0x0;
                    piVar10 = (int *)piVar10[3]) {
                  if (piVar10[2] == param_2) {
                    if ((piVar10 != (int *)0x0) && (piVar10[2] == param_2)) {
                      if (*piVar10 == 0) {
                        iVar6 = FUN_00303960(param_2);
                        *piVar10 = iVar6;
                        piVar10[1] = 0;
                      }
                      goto LAB_002fb2d0;
                    }
                    break;
                  }
                }
                if (pcVar12 == (code *)0x0) {
                  piVar10 = (int *)0x0;
                }
                else {
                  piVar10 = (int *)(*pcVar12)(0x10000,0x100,0,0x10);
                }
                iVar6 = FUN_00303960(param_2);
                *piVar10 = iVar6;
                piVar10[1] = 0;
                piVar10[2] = param_2;
                piVar10[3] = 0;
                FUN_002baf18(piVar10,param_2);
              }
LAB_002fb2d0:
              iVar6 = *piVar1;
              if (*(int **)(iVar6 + 0x8a8) == (int *)0x0) {
                *(uint *)(*(int *)(iVar6 + 8) + puVar11[0x16] * 4 + 4) = param_2;
              }
              else {
                *(uint *)(**(int **)(iVar6 + 0x8a8) + puVar11[0x16] * 4 + 4) = param_2;
              }
              puVar11[puVar11[0x16] + 0x17] = param_2;
              *(int **)(iVar6 + puVar11[0x16] * 4 + 0x810) = piVar10;
              uVar3 = puVar11[0x16] + 10 >> 5;
              puVar11[uVar3] = puVar11[uVar3] | 1 << (puVar11[0x16] + 10 & 0x1f);
              return;
            }
            if (param_1 == 0x6600) {
              if (puVar11[0x3d] == param_2) {
                return;
              }
              if (param_2 != 0) {
                for (piVar10 = *(int **)(iVar7 + 0x10); piVar10 != (int *)0x0;
                    piVar10 = (int *)piVar10[3]) {
                  if (piVar10[2] == param_2) {
                    if ((piVar10 != (int *)0x0) && (piVar10[2] == param_2)) {
                      if (*piVar10 == 0) {
                        if (pcVar12 == (code *)0x0) {
                          puVar5 = (uint *)0x0;
                        }
                        else {
                          puVar5 = (uint *)(*pcVar12)(0x10000,0x100,0,0x9c);
                        }
                        if (puVar5 != (uint *)0x0) {
                          FUN_00343280(puVar5,0x9c);
                          *puVar5 = param_2;
                        }
                        piVar10[1] = 2;
                        *piVar10 = (int)puVar5;
                      }
                      goto LAB_002fb568;
                    }
                    break;
                  }
                }
                if (pcVar12 == (code *)0x0) {
                  piVar10 = (int *)0x0;
                }
                else {
                  piVar10 = (int *)(*pcVar12)(0x10000,0x100,0,0x10);
                }
                pcVar12 = (code *)*puVar2;
                if (pcVar12 == (code *)0x0) {
                  puVar5 = (uint *)0x0;
                }
                else {
                  puVar5 = (uint *)(*pcVar12)(0x10000,0x100,0,0x9c);
                }
                if (puVar5 != (uint *)0x0) {
                  FUN_00343280(puVar5,0x9c);
                  *puVar5 = param_2;
                }
                piVar10[1] = 2;
                piVar10[2] = param_2;
                piVar10[3] = 0;
                *piVar10 = (int)puVar5;
                FUN_002baf18(piVar10,param_2);
              }
LAB_002fb568:
              iVar7 = *piVar1;
              bVar13 = false;
              iVar6 = 0;
              do {
                if (param_2 == 0) {
                  uVar3 = *(uint *)(*(int *)(iVar7 + 8) + iVar6 * 4 + 0x1c);
                }
                else {
                  uVar3 = *(uint *)(*piVar10 + iVar6 * 4 + 0x1c);
                }
                if (puVar11[iVar6 + 0x1d] != uVar3) {
                  puVar11[iVar6 + 0x1d] = uVar3;
                  if (uVar3 == 0) {
                    uVar3 = iVar7 + iVar6 * 4;
                    *(undefined4 *)(uVar3 + 0x828) = 0;
                  }
                  else {
                    iVar8 = *(int *)(iVar7 + (uVar3 & 0x1ff) * 4 + 0x10);
                    if (iVar8 != 0) {
                      do {
                        bVar13 = *(uint *)(iVar8 + 8) != uVar3;
                        if (bVar13) {
                          iVar8 = *(int *)(iVar8 + 0xc);
                        }
                      } while (bVar13 && iVar8 != 0);
                    }
                    uVar3 = iVar7 + iVar6 * 4;
                    *(int *)(uVar3 + 0x828) = iVar8;
                  }
                  bVar13 = true;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < 0x20);
              if (bVar13) {
                uVar3 = *puVar11;
              }
              iVar6 = 0;
              if (bVar13) {
                *puVar11 = uVar3 | 0x4000;
              }
              do {
                if (param_2 == 0) {
                  uVar3 = *(uint *)(*(int *)(iVar7 + 8) + iVar6 * 4 + 4);
                  uVar9 = *(uint *)(*(int *)(iVar7 + 8) + iVar6 * 4 + 0x10);
                }
                else {
                  uVar3 = *(uint *)(*piVar10 + iVar6 * 4 + 4);
                  uVar9 = *(uint *)(*piVar10 + iVar6 * 4 + 0x10);
                }
                uVar4 = puVar11[iVar6 + 0x17];
                bVar13 = uVar4 == uVar3;
                if (bVar13) {
                  uVar4 = puVar11[iVar6 + 0x1a];
                }
                if (!bVar13 || uVar4 != uVar9) {
                  if (uVar3 == 0) {
                    uVar4 = iVar7 + iVar6 * 4;
                  }
                  puVar11[iVar6 + 0x17] = uVar3;
                  if (uVar3 == 0) {
                    *(undefined4 *)(uVar4 + 0x810) = 0;
                  }
                  else {
                    iVar8 = *(int *)(iVar7 + (uVar3 & 0x1ff) * 4 + 0x10);
                    if (iVar8 != 0) {
                      do {
                        bVar13 = *(uint *)(iVar8 + 8) != uVar3;
                        if (bVar13) {
                          iVar8 = *(int *)(iVar8 + 0xc);
                        }
                      } while (bVar13 && iVar8 != 0);
                    }
                    uVar4 = iVar7 + iVar6 * 4;
                    *(int *)(uVar4 + 0x810) = iVar8;
                  }
                  if (uVar9 == 0) {
                    uVar4 = iVar7 + iVar6 * 4;
                  }
                  puVar11[iVar6 + 0x1a] = uVar9;
                  if (uVar9 == 0) {
                    *(undefined4 *)(uVar4 + 0x81c) = 0;
                  }
                  else {
                    iVar8 = *(int *)(iVar7 + (uVar9 & 0x1ff) * 4 + 0x10);
                    if (iVar8 != 0) {
                      do {
                        bVar13 = *(uint *)(iVar8 + 8) != uVar9;
                        if (bVar13) {
                          iVar8 = *(int *)(iVar8 + 0xc);
                        }
                      } while (bVar13 && iVar8 != 0);
                    }
                    *(int *)(iVar7 + iVar6 * 4 + 0x81c) = iVar8;
                  }
                  iVar8 = (int)(iVar6 + 10U) >> 5;
                  puVar11[iVar8] = puVar11[iVar8] | 1 << (iVar6 + 10U & 0x1f);
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < 3);
              puVar11[0x3d] = param_2;
              *(int **)(iVar7 + 0x8a8) = piVar10;
              piVar10 = piRam002fb8d4;
              local_28 = *(int *)(iVar7 + 0xc);
              if (local_28 == 0) {
                return;
              }
              FUN_002d6e20(1,&local_28);
              *(undefined4 *)(*piVar10 + 0xc) = 0;
              return;
            }
            if (param_1 != 0x6610 && param_1 != 0x6611) {
              return;
            }
          }
          else if ((iVar6 != 1 && iVar6 != 2) && iVar6 != 3) {
            return;
          }
        }
      }
    }
    else if (iVar6 != 9) {
      if (iVar6 < 10) {
        switch(iVar6) {
        default:
          goto switchD_002fb13c_caseD_0;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
          goto switchD_002fb13c_caseD_1;
        }
      }
      if (iVar6 != 0xe) {
        if (iVar6 < 0xf) {
          if (((iVar6 != 10 && iVar6 != 0xb) && iVar6 != 0xc) && iVar6 != 0xd) {
            return;
          }
        }
        else if (iVar6 != 0xf && iVar6 != 0x10) {
          if (iVar6 != 0x1ef4) {
            return;
          }
          if (puVar11[puVar11[0x16] + 0x1a] == param_2) {
            return;
          }
          if (param_2 != 0) {
            for (piVar10 = *(int **)(iVar7 + 0x10); piVar10 != (int *)0x0;
                piVar10 = (int *)piVar10[3]) {
              if (piVar10[2] == param_2) {
                if ((piVar10 != (int *)0x0) && (piVar10[2] == param_2)) {
                  if (*piVar10 == 0) {
                    iVar6 = FUN_003038b0(param_2);
                    *piVar10 = iVar6;
                    piVar10[1] = 1;
                  }
                  goto LAB_002fb3d0;
                }
                break;
              }
            }
            if (pcVar12 == (code *)0x0) {
              piVar10 = (int *)0x0;
            }
            else {
              piVar10 = (int *)(*pcVar12)(0x10000,0x100,0,0x10);
            }
            iVar6 = FUN_003038b0(param_2);
            piVar10[2] = param_2;
            piVar10[3] = 0;
            *piVar10 = iVar6;
            piVar10[1] = 1;
            FUN_002baf18(piVar10,param_2);
          }
LAB_002fb3d0:
          iVar6 = *piVar1;
          if (*(int **)(iVar6 + 0x8a8) == (int *)0x0) {
            *(uint *)(*(int *)(iVar6 + 8) + puVar11[0x16] * 4 + 0x10) = param_2;
          }
          else {
            *(uint *)(**(int **)(iVar6 + 0x8a8) + puVar11[0x16] * 4 + 0x10) = param_2;
          }
          puVar11[puVar11[0x16] + 0x1a] = param_2;
          *(int **)(iVar6 + puVar11[0x16] * 4 + 0x81c) = piVar10;
          uVar3 = puVar11[0x16] + 10 >> 5;
          puVar11[uVar3] = puVar11[uVar3] | 1 << (puVar11[0x16] + 10 & 0x1f);
          return;
        }
      }
    }
  }
switchD_002fb13c_caseD_1:
  if (puVar11[param_1 + -0x65f3] != param_2) {
    if (param_2 != 0) {
      for (piVar10 = *(int **)(iVar7 + 0x10); piVar10 != (int *)0x0; piVar10 = (int *)piVar10[3]) {
        if (piVar10[2] == param_2) {
          if ((piVar10 != (int *)0x0) && (piVar10[2] == param_2)) {
            if (*piVar10 == 0) {
              if (pcVar12 == (code *)0x0) {
                puVar5 = (uint *)0x0;
              }
              else {
                puVar5 = (uint *)(*pcVar12)(0x10000,0x100,0,0x820);
              }
              if (puVar5 != (uint *)0x0) {
                FUN_00343280(puVar5,0x820);
                puVar5[0x207] = 0xffffffff;
                *puVar5 = param_2;
              }
              piVar10[1] = 3;
              *piVar10 = (int)puVar5;
            }
            goto LAB_002fb88c;
          }
          break;
        }
      }
      if (pcVar12 == (code *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)(*pcVar12)(0x10000,0x100,0,0x10);
      }
      pcVar12 = (code *)*puVar2;
      if (pcVar12 == (code *)0x0) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = (uint *)(*pcVar12)(0x10000,0x100,0,0x820);
      }
      if (puVar5 != (uint *)0x0) {
        FUN_00343280(puVar5,0x820);
        puVar5[0x207] = 0xffffffff;
        *puVar5 = param_2;
      }
      piVar10[1] = 3;
      piVar10[2] = param_2;
      piVar10[3] = 0;
      *piVar10 = (int)puVar5;
      FUN_002baf18(piVar10,param_2);
    }
LAB_002fb88c:
    iVar6 = *piVar1;
    if (*(int **)(iVar6 + 0x8a8) == (int *)0x0) {
      iVar7 = *(int *)(iVar6 + 8);
    }
    else {
      iVar7 = **(int **)(iVar6 + 0x8a8);
    }
    *(uint *)(iVar7 + iRam002fb8e4 + param_1 * 4) = param_2;
    puVar11[param_1 + -0x65f3] = param_2;
    *(int **)(iVar6 + param_1 * 4 + -0x19018) = piVar10;
    *puVar11 = *puVar11 | 0x4000;
    return;
  }
switchD_002fb13c_caseD_0:
  return;
}

