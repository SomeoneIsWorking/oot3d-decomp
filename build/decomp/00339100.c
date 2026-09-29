// OoT3D decomp @ 00339100  name=FUN_00339100  size=568

undefined4 FUN_00339100(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;

  iVar4 = *(int *)(param_2 + (uint)*(byte *)(param_2 + 0x2fa) * 4 + 0x2a4);
  if ((*(uint *)(param_3 + 4) & *DAT_00339374) != 0) {
    FUN_0034e1d0(param_1,param_2);
    return 1;
  }
  iVar3 = FUN_00346964(param_1);
  iVar1 = DAT_00339378;
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(short *)(iVar4 + 0x1c) == 0x26) || (*(short *)(iVar4 + 0x1bc) != 0)) {
    FUN_0037547c(DAT_00339378,0,4,DAT_00339380,DAT_00339380,DAT_0033937c);
    return 1;
  }
  *(undefined2 *)(param_2 + 0x2a2) = *(undefined2 *)(param_2 + 0x2a0);
  FUN_0036be34(param_1,*(undefined2 *)
                        (*(int *)(param_2 + (uint)*(byte *)(param_2 + 0x2fa) * 4 + 0x2a4) + 0x1b4));
  *(undefined4 *)(param_2 + 0x330) = 0;
  *(undefined4 *)(param_2 + 0x368) = 0;
  iVar3 = (int)*(short *)(iVar4 + 0x1c);
  iVar4 = iVar1 + 2;
  if (iVar3 == 0x20) {
switchD_00339234_caseD_21:
    FUN_0037547c(iVar4,0,4,DAT_00339380,DAT_00339380,DAT_0033937c);
    uVar2 = 0x18;
    *(undefined1 *)(param_2 + 0x2f9) = 0;
  }
  else {
    if (0x20 < iVar3) {
      switch(iVar3) {
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
        goto switchD_00339234_caseD_21;
      default:
        goto switchD_00339234_caseD_26;
      case 0x2d:
      case 0x2e:
      case 0x2f:
switchD_00339234_caseD_2d:
        FUN_0037547c(iVar4,0,4,DAT_00339380,DAT_00339380,DAT_0033937c);
        uVar2 = 0xd;
        *(undefined1 *)(param_2 + 0x2f9) = 0;
        goto LAB_003392c4;
      }
    }
    if (iVar3 == 0x13) {
LAB_003392cc:
      FUN_0037547c(iVar1,0,4,DAT_00339380,DAT_00339380,DAT_0033937c);
      uVar2 = 0xc;
      *(undefined1 *)(param_2 + 0x2f9) = 0;
    }
    else {
      if (iVar3 < 0x14) {
        if (iVar3 == 3 || iVar3 == 6) goto switchD_00339234_caseD_2d;
        if (iVar3 == 0x11) {
          FUN_0037547c(iVar4,0,4,DAT_00339380,DAT_00339380,DAT_0033937c);
          uVar2 = 10;
          *(undefined1 *)(param_2 + 0x2f9) = 0;
          goto LAB_003392c4;
        }
        if (iVar3 == 0x12) {
          FUN_0037547c(iVar4,0,4,DAT_00339380,DAT_00339380,DAT_0033937c);
          uVar2 = 0xb;
          *(undefined1 *)(param_2 + 0x2f9) = 0;
          goto LAB_003392c4;
        }
      }
      else {
        if (iVar3 == 0x14) goto LAB_003392cc;
        if (iVar3 == 0x1e || iVar3 == 0x1f) goto switchD_00339234_caseD_21;
      }
switchD_00339234_caseD_26:
      FUN_0037547c(iVar4,0,4,DAT_00339380,DAT_00339380,DAT_0033937c);
      uVar2 = 9;
      *(undefined1 *)(param_2 + 0x2f9) = 0;
    }
  }
LAB_003392c4:
  *(undefined2 *)(param_2 + 0x2a0) = uVar2;
  return 1;
}
