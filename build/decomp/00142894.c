// OoT3D decomp @ 00142894  name=FUN_00142894  size=420

void FUN_00142894(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  iVar3 = *(int *)(param_2 + 0x20ac);
  uVar4 = *(ushort *)(param_1 + 0x1c) & 0xff;
  if ((*(int *)(param_2 + 0x2130) == param_1) && ((*(uint *)(DAT_00142ab8 + param_2) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  fVar8 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
  fVar6 = *(float *)(param_1 + 0x2c) - *(float *)(iVar3 + 0x2c);
  fVar7 = *(float *)(param_1 + 0x30) - *(float *)(iVar3 + 0x30);
  if ((int)DAT_00142acc < (int)(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7)) {
    *(undefined1 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
  }
  else {
    uVar1 = (uint)*(byte *)(param_1 + 0x208);
    if (uVar1 == 0) {
      if ((*(uint *)(iVar3 + 0x1714) & 0x1000000) == 0) {
        *(uint *)(iVar3 + 0x1714) = *(uint *)(iVar3 + 0x1714) | 0x800000;
        return;
      }
      *(undefined1 *)(param_1 + 0x208) = 1;
    }
    else if (uVar1 != 1) {
      bVar5 = uVar1 != 2;
      uVar2 = DAT_00142acc;
      if (!bVar5) {
        uVar1 = param_2 + 0x2b00;
        uVar2 = (uint)*(ushort *)(param_2 + 0x2b7e);
      }
      if (bVar5 || uVar2 != 4) {
        return;
      }
      if (uVar4 == 0x40) {
        if (*(short *)(uVar1 + 0x7c) != 9) {
LAB_00142aa8:
          *(undefined1 *)(param_1 + 0x208) = 0;
          return;
        }
      }
      else {
        if (uVar4 == 0x41) {
          uVar1 = (uint)*(ushort *)(uVar1 + 0x7c);
        }
        if (uVar4 != 0x41 || uVar1 != 0xb) goto LAB_00142aa8;
      }
      *(undefined4 *)(param_1 + 0x1fc) = DAT_00142ad0;
      FUN_0036cf80(param_2,param_1,0);
      *(undefined2 *)(DAT_00142ad4 + param_1) = 0;
      *(undefined1 *)(param_1 + 0x208) = 0;
      return;
    }
    FUN_0037073c(param_2,1);
    *(undefined1 *)(param_1 + 0x208) = 2;
  }
  return;
}
