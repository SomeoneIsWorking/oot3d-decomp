// OoT3D decomp @ 0016d038  name=FUN_0016d038  size=404

void FUN_0016d038(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;

  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  uVar1 = DAT_0016d1e0;
  iVar4 = *(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4);
  FUN_00373500(DAT_0016d1e0,DAT_0016d1e0,DAT_0016d1dc,param_1 + 0x378);
  if (DAT_0016d1e4 <= *(int *)(param_1 + 0x378)) {
    *(undefined4 *)(param_1 + 0x378) = uVar1;
  }
  FUN_0034e418(param_1);
  if (*(int *)(param_1 + 0x378) != 0x3f800000) {
    return;
  }
  if (iVar2 == 5) {
    iVar2 = FUN_00346964(param_2);
    if (iVar2 == 0) {
      return;
    }
LAB_0016d11c:
    *(undefined2 *)(param_1 + 0x2a0) = *(undefined2 *)(param_1 + 0x2a2);
    FUN_0036be34(param_2,*(undefined2 *)
                          (*(int *)(param_1 + (uint)*(byte *)(param_1 + 0x2fa) * 4 + 0x2a4) + 0x116)
                );
    return;
  }
  if (iVar2 != 4) {
    return;
  }
  if ((*(uint *)(param_2 + 0x18) & *DAT_0016d1e8) != 0) goto LAB_0016d11c;
  iVar2 = FUN_00346964(param_2);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_00369f3c(param_2);
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      return;
    }
    goto LAB_0016d11c;
  }
  switch(*(undefined2 *)(iVar4 + 0x1c)) {
  case 0x1e:
    uVar3 = *(ushort *)(DAT_0016d1ec + 0xc) | 8;
    break;
  case 0x1f:
    uVar3 = *(ushort *)(DAT_0016d1ec + 0xc) | 0x20;
    break;
  case 0x20:
    uVar3 = *(ushort *)(DAT_0016d1ec + 0xc) | 0x10;
    break;
  case 0x21:
    uVar3 = *(ushort *)(DAT_0016d1ec + 0xc) | 0x40;
    break;
  default:
    goto switchD_0016d158_default;
  }
  *(ushort *)(DAT_0016d1ec + 0xc) = uVar3;
switchD_0016d158_default:
  FUN_0034e37c(param_2,param_1);
  uVar1 = DAT_0016d1f0;
  *(undefined1 *)(param_1 + 0x2f9) = 0;
  *(undefined4 *)(param_1 + 0x378) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0016d1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar4 + 0x1c0))(param_2,iVar4);
  return;
}
