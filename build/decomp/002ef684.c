// OoT3D decomp @ 002ef684  name=FUN_002ef684  size=472

bool FUN_002ef684(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar2 = DAT_002ef9ac;
  iVar1 = DAT_002ef9a8;
  iVar3 = *(int *)(DAT_002ef9a8 + 0x5c);
  if (iVar3 == 0) {
    FUN_002efd88();
    FUN_002f8b80(DAT_002ef9b0,DAT_002ef9b0,*(undefined4 *)(iVar1 + 4),1,0);
  }
  else {
    if (iVar3 == 1) {
      local_1c = DAT_002ef9ac;
      local_18 = DAT_002ef9ac;
      FUN_002f9430(*(undefined4 *)(DAT_002ef9a8 + 4),&local_1c,1,0x1c);
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x23);
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x1a);
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x1b);
    }
    else if (iVar3 != 2 && iVar3 != 3) goto LAB_002ef984;
    iVar3 = 0;
    do {
      local_18 = uVar2;
      local_1c = uVar2;
      switch(iVar3) {
      case 1:
      case 3:
      case 4:
      case 5:
      case 6:
      case 0xb:
      case 0xc:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
        local_1c = VectorSignedToFloat(*(int *)(iVar1 + 0x5c) * -0x10,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar3);
        break;
      case 2:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xd:
      case 0xe:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
        local_1c = VectorSignedToFloat(*(int *)(iVar1 + 0x5c) << 4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar3);
        break;
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
        local_18 = VectorSignedToFloat(*(int *)(iVar1 + 0x5c) * 0xc,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar3);
        break;
      case 0x15:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
        local_18 = VectorSignedToFloat(*(int *)(iVar1 + 0x5c) * -0xc,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar3);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x5c);
  }
LAB_002ef984:
  iVar3 = *(int *)(iVar1 + 0x5c) + -1;
  *(int *)(iVar1 + 0x5c) = iVar3;
  if (iVar3 < 0) {
    *(undefined4 *)(iVar1 + 0x5c) = 0;
  }
  return iVar3 < 0;
}

