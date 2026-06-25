// OoT3D decomp @ 001648e0  name=FUN_001648e0  size=476

void FUN_001648e0(int param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  *(undefined *)(DAT_00164abc + param_1) = 1;
  uVar3 = *(ushort *)(param_1 + 0x1c) & 0x7f;
  if (uVar3 < 0x15) {
    iVar4 = FUN_00363c10(param_2 + 0x3a58,(int)*(short *)(DAT_00164ac0 + uVar3 * 0x18));
    *(int *)(param_1 + 0xd90) = iVar4;
    if (iVar4 < 0) goto LAB_00164930;
  }
  else {
LAB_00164930:
    FUN_00374428(param_1);
  }
  sVar1 = *(short *)(param_2 + 0x104);
  if (sVar1 == 0x35) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x1c);
    bVar5 = (*(ushort *)(param_1 + 0x1c) & 0x7f) != 0;
    if (!bVar5) {
      uVar3 = *(uint *)(DAT_00164ac4 + 0x10);
    }
    if (bVar5 || uVar3 != 0) goto LAB_00164ab0;
  }
  else if (sVar1 < 0x36) {
    if (sVar1 == 0x1e || sVar1 == 0x1f) {
      if (((*(ushort *)(param_1 + 0x1c) & 0x7f) != 0xe) ||
         ((*(int *)(DAT_00164ac4 + 0x10) != 1 &&
          (((*(ushort *)(DAT_00164ac8 + 0xfc) & 1) == 0 ||
           ((*(ushort *)(DAT_00164ac8 + 0xf4) & 0x20) != 0)))))) goto LAB_00164ab0;
    }
    else {
      if (sVar1 == 0x2a) {
        if ((*(ushort *)(param_1 + 0x1c) & 0x7f) != 0) {
          uVar2 = *(ushort *)(param_1 + 0x1c) & 0x7f;
          if ((uVar2 != 9 && uVar2 != 2) && uVar2 != 7) goto LAB_00164ab0;
          iVar4 = *(int *)(DAT_00164ac4 + 0x10);
          bVar5 = iVar4 != 0;
          if (bVar5) {
            iVar4 = *(int *)(DAT_00164ac4 + 4);
          }
          if (bVar5 && iVar4 != 1) goto LAB_00164ab0;
          goto LAB_00164aa8;
        }
        iVar4 = 1 - *(uint *)(DAT_00164ac4 + 4);
        if (1 < *(uint *)(DAT_00164ac4 + 4)) {
          iVar4 = 0;
        }
      }
      else {
LAB_00164a88:
        uVar2 = *(ushort *)(param_1 + 0x1c) & 0x7f;
        if (uVar2 != 0x13 && uVar2 != 0x14) goto LAB_00164ab0;
        iVar4 = *(int *)(DAT_00164ac4 + 4);
      }
      if (iVar4 != 0) goto LAB_00164ab0;
    }
  }
  else if (sVar1 == 0x37) {
    if ((*(ushort *)(param_1 + 0x1c) & 0x7f) != 10) goto LAB_00164ab0;
    iVar4 = *(int *)(DAT_00164ac4 + 4);
    bVar5 = iVar4 != 1;
    if (bVar5) {
      iVar4 = *(int *)(DAT_00164ac4 + 0x10);
    }
    if (bVar5 && iVar4 != 0) goto LAB_00164ab0;
  }
  else {
    if (sVar1 != 0x52) goto LAB_00164a88;
    uVar2 = *(ushort *)(param_1 + 0x1c) & 0x7f;
    if (((((((uVar2 != 9 && uVar2 != 10) && uVar2 != 0xc) && uVar2 != 2) && uVar2 != 7) ||
         (*(int *)(DAT_00164ac4 + 4) != 0)) || (uVar2 == 0xc)) ||
       (*(int *)(DAT_00164ac4 + 0x10) != 1)) goto LAB_00164ab0;
  }
LAB_00164aa8:
  FUN_00374428(param_1);
LAB_00164ab0:
  *(undefined4 *)(param_1 + 0xd88) = DAT_00164acc;
  return;
}

