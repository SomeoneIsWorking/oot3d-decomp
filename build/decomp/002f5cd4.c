// OoT3D decomp @ 002f5cd4  name=FUN_002f5cd4  size=2080

/* WARNING: Type propagation algorithm not settling */

void FUN_002f5cd4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char local_48 [4];
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;

  iVar3 = DAT_002f5fdc;
  uVar2 = DAT_002f5fd8;
  uVar1 = DAT_002f5fd4;
  iVar6 = 0;
  local_34 = DAT_002f5fd4;
  do {
    if (iVar6 - 0x33U < 0x22) {
      local_38 = uVar1;
      local_34 = uVar1;
    }
    else {
      local_38 = uVar2;
    }
    FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x6c);
  local_3c = DAT_002f5fe0;
  local_38 = uVar2;
  local_34 = uVar1;
  FUN_002fcdec(*(undefined4 *)(iVar3 + 8),&local_3c,1,0x42);
  iVar6 = 0x5b;
  do {
    FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x5e);
  FUN_002fcdec(*(undefined4 *)(iVar3 + 8),&local_3c,1,0x47);
  iVar6 = 0x5e;
  do {
    FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x61);
  FUN_002fcdec(*(undefined4 *)(iVar3 + 8),&local_3c,1,0x4f);
  iVar6 = 99;
  do {
    FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x65);
  FUN_002fcdec(*(undefined4 *)(iVar3 + 8),&local_3c,1,0x53);
  iVar6 = 0x65;
  do {
    FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x67);
  FUN_002fcdec(*(undefined4 *)(iVar3 + 8),&local_3c,1,0x4b);
  iVar6 = 0x61;
  do {
    FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 99);
  if (*(int *)(iVar3 + 0x44) == 0) {
    return;
  }
  FUN_002f9484(auStack_40,auStack_44,local_48);
  uVar4 = DAT_002f62f8;
  uVar2 = DAT_002f62f4;
  iVar6 = *(int *)(iVar3 + 0x48);
  if (iVar6 == 0) {
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    iVar6 = FUN_0033f428(0x34,0x3d,0x38,0x20,1);
    if (iVar6 == 0) {
      iVar6 = FUN_0033f428(0xd8,0x3d,0x38,0x20,1);
      if (iVar6 == 0) {
        iVar6 = FUN_0033f428(0x58,0x91,0x2e,0x2e,1);
        if (iVar6 == 0) {
          iVar6 = FUN_0033f428(0xba,0x91,0x2e,0x2e,1);
          if (iVar6 == 0) {
            iVar6 = FUN_0033f428(0x89,0x5b,0x2e,0x2e,1);
            if (iVar6 == 0) {
              uVar5 = FUN_002f008c();
              if ((uVar5 & 0x200) == 0) {
                uVar5 = FUN_002f008c();
                if ((uVar5 & 0x100) == 0) {
                  uVar5 = FUN_002f008c();
                  if ((uVar5 & 0x800) == 0) {
                    uVar5 = FUN_002f008c();
                    if ((uVar5 & 1) == 0) {
                      uVar5 = FUN_002f008c();
                      if ((uVar5 & 0x400) != 0) {
                        *(undefined4 *)(iVar3 + 0x48) = 0x400;
                      }
                    }
                    else {
                      *(undefined4 *)(iVar3 + 0x48) = 1;
                    }
                  }
                  else {
                    *(undefined4 *)(iVar3 + 0x48) = 0x800;
                  }
                }
                else {
                  *(undefined4 *)(iVar3 + 0x48) = 0x100;
                }
              }
              else {
                *(undefined4 *)(iVar3 + 0x48) = 0x200;
              }
              goto LAB_002f64f8;
            }
            *(undefined4 *)(iVar3 + 0x48) = 0x400;
          }
          else {
            *(undefined4 *)(iVar3 + 0x48) = 1;
          }
        }
        else {
          *(undefined4 *)(iVar3 + 0x48) = 0x800;
        }
      }
      else {
        *(undefined4 *)(iVar3 + 0x48) = 0x100;
      }
      *(undefined4 *)(iVar3 + 0x4c) = 1;
    }
    else {
      *(undefined4 *)(iVar3 + 0x4c) = 1;
      *(undefined4 *)(iVar3 + 0x48) = 0x200;
    }
    goto LAB_002f64f8;
  }
  if (*(int *)(iVar3 + 0x4c) == 0) {
    if ((((((iVar6 == 0x200) && (uVar5 = FUN_002f5cc4(), (uVar5 & 0x200) == 0)) ||
          ((*(int *)(iVar3 + 0x48) == 0x100 && (uVar5 = FUN_002f5cc4(), (uVar5 & 0x100) == 0)))) ||
         ((*(int *)(iVar3 + 0x48) == 0x400 && (uVar5 = FUN_002f5cc4(), (uVar5 & 0x400) == 0)))) ||
        ((*(int *)(iVar3 + 0x48) == 1 && (uVar5 = FUN_002f5cc4(), (uVar5 & 1) == 0)))) ||
       ((*(int *)(iVar3 + 0x48) == 0x800 && (uVar5 = FUN_002f5cc4(), (uVar5 & 0x800) == 0)))) {
      *(undefined4 *)(iVar3 + 0x48) = 0;
    }
    uVar5 = FUN_002f008c();
    if ((uVar5 & 0x200) == 0) {
      uVar5 = FUN_002f008c();
      if ((uVar5 & 0x100) == 0) {
        uVar5 = FUN_002f008c();
        if ((uVar5 & 0x800) == 0) {
          uVar5 = FUN_002f008c();
          if ((uVar5 & 1) == 0) {
            uVar5 = FUN_002f008c();
            if ((uVar5 & 0x400) == 0) goto LAB_002f6270;
            if (*(int *)(iVar3 + 0x48) != 0x400) {
              *(undefined4 *)(iVar3 + 0x48) = 0x400;
              goto LAB_002f6484;
            }
          }
          else if (*(int *)(iVar3 + 0x48) != 1) {
            *(undefined4 *)(iVar3 + 0x48) = 1;
            goto LAB_002f6404;
          }
        }
        else if (*(int *)(iVar3 + 0x48) != 0x800) {
          *(undefined4 *)(iVar3 + 0x48) = 0x800;
          goto LAB_002f6384;
        }
      }
      else if (*(int *)(iVar3 + 0x48) != 0x100) {
        *(undefined4 *)(iVar3 + 0x48) = 0x100;
        goto LAB_002f6304;
      }
    }
    else if (*(int *)(iVar3 + 0x48) != 0x200) {
      *(undefined4 *)(iVar3 + 0x48) = 0x200;
      goto LAB_002f627c;
    }
    *(undefined4 *)(iVar3 + 0x48) = 0;
  }
  else {
    if (local_48[0] != '\0') {
      if (iVar6 == 0x200) {
        iVar6 = FUN_0033f428(0x34,0x3d,0x38,0x20,0);
      }
      else if (iVar6 == 0x100) {
        iVar6 = FUN_0033f428(0xd8,0x3d,0x38,0x20,0);
      }
      else if (iVar6 == 0x800) {
        iVar6 = FUN_0033f428(0x58,0x91,0x2e,0x2e,0);
      }
      else if (iVar6 == 1) {
        iVar6 = FUN_0033f428(0xba,0x91,0x2e,0x2e,0);
      }
      else {
        if (iVar6 != 0x400) goto LAB_002f64f8;
        iVar6 = FUN_0033f428(0x89,0x5b,0x2e,0x2e,0);
      }
      if (iVar6 != 0) {
LAB_002f6270:
        iVar6 = *(int *)(iVar3 + 0x48);
        if (iVar6 != 0x200) {
          if (iVar6 != 0x100) {
            if (iVar6 != 0x800) {
              if (iVar6 != 1) {
                if (iVar6 != 0x400) goto LAB_002f64f8;
LAB_002f6484:
                local_3c = uVar2;
                FUN_002fcdec(*(undefined4 *)(iVar3 + 8),&local_3c,1,0x4b);
                local_38 = uVar1;
                local_34 = uVar4;
                FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,0x4b);
                FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,0x4c);
                local_38 = uVar1;
                local_34 = uVar1;
                iVar6 = 0x61;
                do {
                  FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
                  iVar6 = iVar6 + 1;
                } while (iVar6 < 99);
                goto LAB_002f64f8;
              }
LAB_002f6404:
              local_3c = uVar2;
              FUN_002fcdec(*(undefined4 *)(iVar3 + 8),&local_3c,1,0x53);
              local_38 = uVar1;
              local_34 = uVar4;
              FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,0x53);
              FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,0x54);
              local_38 = uVar1;
              local_34 = uVar1;
              iVar6 = 0x65;
              do {
                FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
                iVar6 = iVar6 + 1;
              } while (iVar6 < 0x67);
              goto LAB_002f64f8;
            }
LAB_002f6384:
            local_3c = uVar2;
            FUN_002fcdec(*(undefined4 *)(iVar3 + 8),&local_3c,1,0x4f);
            local_38 = uVar1;
            local_34 = uVar4;
            FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,0x4f);
            FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,0x50);
            local_38 = uVar1;
            local_34 = uVar1;
            iVar6 = 99;
            do {
              FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
              iVar6 = iVar6 + 1;
            } while (iVar6 < 0x65);
            goto LAB_002f64f8;
          }
LAB_002f6304:
          local_3c = uVar2;
          FUN_002fcdec(*(undefined4 *)(iVar3 + 8),&local_3c,1,0x47);
          local_38 = uVar1;
          local_34 = uVar4;
          FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,0x47);
          FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,0x48);
          local_38 = uVar1;
          local_34 = uVar1;
          iVar6 = 0x5e;
          do {
            FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x61);
          goto LAB_002f64f8;
        }
LAB_002f627c:
        local_3c = uVar2;
        FUN_002fcdec(*(undefined4 *)(iVar3 + 8),&local_3c,1,0x42);
        local_38 = uVar1;
        local_34 = uVar4;
        FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,0x42);
        FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,0x43);
        local_38 = uVar1;
        local_34 = uVar1;
        iVar6 = 0x5b;
        do {
          FUN_002f9430(*(undefined4 *)(iVar3 + 8),&local_38,1,iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x5e);
        goto LAB_002f64f8;
      }
    }
    *(undefined4 *)(iVar3 + 0x4c) = 0;
    *(undefined4 *)(iVar3 + 0x48) = 0;
  }
LAB_002f64f8:
  *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar3 + 0x48);
  return;
}
