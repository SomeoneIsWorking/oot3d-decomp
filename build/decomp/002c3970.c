// OoT3D decomp @ 002c3970  name=FUN_002c3970  size=284

uint FUN_002c3970(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_002c3a8c;
  if (param_2 < 6) {
    if (*(char *)(param_1 + 0x5c75) == '\0') {
      if (param_2 == 3) {
        iVar1 = FUN_002c3960();
        if (iVar1 != 0) {
LAB_002c3a5c:
          uVar3 = (uint)*(byte *)(iVar2 + 0x1572);
          if (uVar3 != 0xff) {
            uVar3 = (uint)*(byte *)(iVar2 + 0x83);
          }
          return uVar3;
        }
      }
      else {
        if (param_2 != 4) {
          if (param_2 == 5) {
            iVar2 = FUN_002c3a90();
            if (iVar2 == 0) {
              return 0xff;
            }
          }
          else {
            if (param_2 == 0) {
              if (*(char *)(DAT_002c3a8c + 0x156f) == -1) {
                return 0xff;
              }
              uVar3 = (uint)*(byte *)(DAT_002c3a8c + 0x80);
              if (uVar3 == 0x55) {
                uVar3 = 0x3d;
              }
              return uVar3;
            }
            if (param_2 == 1) {
              uVar3 = (uint)*(byte *)(DAT_002c3a8c + 0x1570);
              if (uVar3 != 0xff) {
                uVar3 = (uint)*(byte *)(DAT_002c3a8c + 0x81);
              }
              return uVar3;
            }
            if (param_2 == 2) {
              uVar3 = (uint)*(byte *)(DAT_002c3a8c + 0x1571);
              if (uVar3 != 0xff) {
                uVar3 = (uint)*(byte *)(DAT_002c3a8c + 0x82);
              }
              return uVar3;
            }
            if (param_2 == 3) goto LAB_002c3a5c;
            if (param_2 == 4) goto LAB_002c3a74;
          }
          uVar3 = FUN_002c3a90();
          return uVar3;
        }
        iVar1 = FUN_002c3950();
        if (iVar1 != 0) {
LAB_002c3a74:
          uVar3 = (uint)*(byte *)(iVar2 + 0x1573);
          if (uVar3 != 0xff) {
            uVar3 = (uint)*(byte *)(iVar2 + 0x84);
          }
          return uVar3;
        }
      }
    }
    else if ('\0' < *(char *)(param_1 + 0x5c75)) {
      return 9;
    }
  }
  return 0xff;
}

