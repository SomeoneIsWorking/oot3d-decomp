// OoT3D decomp @ 002ef9b4  name=FUN_002ef9b4  size=628

bool FUN_002ef9b4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar3 = DAT_002efce8;
  uVar2 = DAT_002efce4;
  iVar1 = DAT_002efce0;
  iVar4 = *(int *)(DAT_002efce0 + 0x5c);
  if (iVar4 == 0) {
    FUN_002fcc88(DAT_002efcec,DAT_002efce8,*(undefined4 *)(DAT_002efce0 + 0x1c));
    FUN_002fcc88(uVar3,DAT_002efcf0,*(undefined4 *)(iVar1 + 0x20));
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),0,400,0xf0,0x2a,0x2a);
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),1,400,0xf0,0x2a,0x2a);
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),2,400,0xf0,0x2a,0x2a);
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),3,400,0xf0,0x2a,0x2a);
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),4,400,0xf0,0x2a,0x2a);
    local_1c = uVar3;
    FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x1c);
    FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x23);
    FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x1a);
    FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x1b);
  }
  else if ((iVar4 == 1 || iVar4 == 2) || iVar4 == 3) {
    iVar4 = 0;
    do {
      local_18 = uVar2;
      local_1c = uVar2;
      switch(iVar4) {
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
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar4);
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
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar4);
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
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar4);
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
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x5c);
  }
  iVar4 = *(int *)(iVar1 + 0x5c) + 1;
  *(int *)(iVar1 + 0x5c) = iVar4;
  return iVar4 == 4;
}

