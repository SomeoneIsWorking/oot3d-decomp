// OoT3D decomp @ 00172cb8  name=FUN_00172cb8  size=1352

int FUN_00172cb8(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;

  uVar2 = *(ushort *)(param_2 + 0x1c);
  iVar1 = 0;
  bVar3 = (uVar2 & 0xff) == 0;
  if (!bVar3) {
    uVar2 = uVar2 & 0xff;
  }
  if ((((((bVar3 || uVar2 == 2) || uVar2 == 3) || uVar2 == 4) || uVar2 == 7) || uVar2 == 8) ||
     (uVar2 == 0xb)) {
    iVar1 = FUN_0036bba8(param_1,0x13);
  }
  uVar2 = *(ushort *)(param_2 + 0x1c) & 0xff;
  if ((((uVar2 == 1 || uVar2 == 5) || uVar2 == 6) || uVar2 == 9) || uVar2 == 10) {
    iVar1 = FUN_0036bba8(param_1,0x14);
  }
  if ((*(ushort *)(param_2 + 0x1c) & 0xff) == 0xc) {
    iVar1 = FUN_0036bba8(param_1,0x12);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  if (*(int *)(DAT_00173258 + 4) != 0) {
    switch(*(ushort *)(param_2 + 0x1c) & 0xff) {
    case 0:
      if ((*(ushort *)(DAT_001732d8 + 0xf4) & 1) != 0) {
        return DAT_001732ec;
      }
      if ((*(uint *)(DAT_00173258 + 0xbc) & DAT_00173264[0x12]) != 0) {
        return DAT_001732f0;
      }
      return DAT_001732f4;
    case 1:
      if ((*(ushort *)(DAT_001732d8 + 0xf4) & 1) != 0) {
        return DAT_001732f8;
      }
      if ((*(uint *)(DAT_00173258 + 0xbc) & DAT_00173264[0x12]) == 0) {
        iVar1 = DAT_00173300;
        if ((*(ushort *)(DAT_0017326c + 0x12) & 0x4000) != 0) {
          iVar1 = DAT_00173304;
        }
        return iVar1;
      }
      break;
    case 2:
      iVar1 = DAT_00173308;
      if ((*(ushort *)(DAT_001732d8 + 0xf4) & 1) != 0) {
        iVar1 = DAT_0017330c;
      }
      return iVar1;
    case 3:
      if ((*(ushort *)(DAT_001732d8 + 0xf4) & 1) != 0) {
        return DAT_00173310;
      }
      if ((*(uint *)(DAT_00173258 + 0xbc) & DAT_00173264[0x12]) == 0) {
        iVar1 = DAT_00173318;
        if ((*(ushort *)(DAT_0017326c + 0x14) & 4) != 0) {
          iVar1 = DAT_0017331c;
        }
        return iVar1;
      }
      return DAT_00173314;
    case 4:
      if ((*(ushort *)(DAT_001732d8 + 0xf4) & 1) != 0) {
        return DAT_00173320;
      }
      if ((*(uint *)(DAT_00173258 + 0xbc) & DAT_00173264[0x12]) != 0) {
        return DAT_001732f0;
      }
      iVar1 = DAT_00173324;
      if ((*(ushort *)(DAT_0017326c + 0x14) & 0x10) != 0) {
        iVar1 = DAT_00173328;
      }
      return iVar1;
    case 5:
      if ((*(ushort *)(DAT_001732d8 + 0xf4) & 1) != 0) {
        return DAT_0017332c;
      }
      if ((*(uint *)(DAT_00173258 + 0xbc) & DAT_00173264[0x12]) == 0) {
        iVar1 = DAT_00173330;
        if ((*(ushort *)(DAT_0017326c + 0x14) & 0x40) != 0) {
          iVar1 = DAT_00173334;
        }
        return iVar1;
      }
      break;
    case 6:
      if ((*(ushort *)(DAT_001732d8 + 0xf4) & 1) != 0) {
        return DAT_00173338;
      }
      if ((*(uint *)(DAT_00173258 + 0xbc) & DAT_00173264[0x12]) == 0) {
        iVar1 = DAT_0017333c;
        if ((*(ushort *)(DAT_0017326c + 0x14) & 0x100) != 0) {
          iVar1 = DAT_00173340;
        }
        return iVar1;
      }
      break;
    case 7:
      return DAT_00173344;
    case 8:
      return DAT_00173348;
    case 9:
      iVar1 = DAT_0017334c;
      if ((*(uint *)(DAT_00173258 + 0xbc) & DAT_00173264[0x12]) != 0) {
        iVar1 = DAT_00173350;
      }
      return iVar1;
    case 10:
      iVar1 = DAT_00173354;
      if ((*(uint *)(DAT_00173258 + 0xbc) & DAT_00173264[0x12]) != 0) {
        iVar1 = DAT_00173358;
      }
      return iVar1;
    case 0xb:
      return DAT_0017336c;
    case 0xc:
      if ((*(ushort *)(DAT_001732d8 + 0xf4) & 1) != 0) {
        return DAT_001732dc;
      }
      if ((*(uint *)(DAT_00173258 + 0xbc) & DAT_00173264[0x12]) == 0) {
        iVar1 = DAT_001732e4;
        if ((*(ushort *)(DAT_0017326c + 0x26) & 0x80) != 0) {
          iVar1 = DAT_001732e8;
        }
        return iVar1;
      }
      return DAT_001732e0;
    default:
switchD_00172d70_default:
      return 0;
    }
    return DAT_001732fc;
  }
  switch(*(ushort *)(param_2 + 0x1c) & 0xff) {
  case 0:
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) == 0) {
      iVar1 = DAT_00173270;
      if ((*(ushort *)(DAT_0017326c + 0x18) & 2) != 0) {
        iVar1 = DAT_00173274;
      }
      return iVar1;
    }
    return DAT_00173268;
  case 1:
    iVar1 = DAT_00173278;
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) != 0) {
      iVar1 = DAT_0017327c;
    }
    return iVar1;
  case 2:
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) == 0) {
      iVar1 = DAT_00173284;
      if ((*(ushort *)(DAT_0017326c + 0x18) & 0x80) != 0) {
        iVar1 = DAT_00173288;
      }
      return iVar1;
    }
    return DAT_00173280;
  case 3:
    iVar1 = DAT_0017328c;
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) != 0) {
      iVar1 = DAT_00173290;
    }
    return iVar1;
  case 4:
    iVar1 = DAT_00173294;
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) != 0) {
      iVar1 = DAT_00173298;
    }
    return iVar1;
  case 5:
    return DAT_0017329c;
  case 6:
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) == 0) {
      iVar1 = DAT_001732a4;
      if ((*(ushort *)(DAT_0017326c + 0x1a) & 2) != 0) {
        iVar1 = DAT_001732a8;
      }
      return iVar1;
    }
    return DAT_001732a0;
  case 7:
    iVar1 = DAT_001732ac;
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) != 0) {
      iVar1 = DAT_001732b0;
    }
    return iVar1;
  case 8:
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) == 0) {
      iVar1 = DAT_001732b8;
      if ((*(ushort *)(DAT_0017326c + 0x1a) & 0x200) != 0) {
        iVar1 = DAT_001732bc;
      }
      return iVar1;
    }
    return DAT_001732b4;
  case 9:
    iVar1 = DAT_001732c0;
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) != 0) {
      iVar1 = DAT_001732c4;
    }
    return iVar1;
  case 10:
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) == 0) {
      return DAT_001732cc;
    }
    break;
  case 0xb:
    if ((*(uint *)(DAT_00173258 + 0xbc) & *DAT_00173264) == 0) {
      iVar1 = DAT_001732d0;
      if ((*(ushort *)(DAT_0017326c + 0x1c) & 2) != 0) {
        iVar1 = DAT_001732d4;
      }
      return iVar1;
    }
    break;
  case 0xc:
    *(undefined1 *)(*(int *)(DAT_0017325c + param_1) + 0x172b) = 9;
    return DAT_00173260;
  default:
    goto switchD_00172d70_default;
  }
  return DAT_001732c8;
}
