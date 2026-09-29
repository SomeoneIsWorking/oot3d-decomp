// OoT3D decomp @ 00118764  name=FUN_00118764  size=256

void FUN_00118764(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;

  local_40 = *DAT_00118864;
  uStack_3c = DAT_00118864[1];
  uStack_38 = DAT_00118864[2];
  iVar5 = FUN_0037571c(param_2);
  fVar4 = DAT_00118874;
  fVar3 = DAT_00118870;
  uVar2 = DAT_0011886c;
  iVar1 = DAT_00118868;
  if (iVar5 != 0) {
    uVar7 = 0;
    do {
      iVar5 = param_2 + uVar7 * 4;
      if (*(short **)(&DAT_000022e0 + iVar5) != (short *)0x0) {
        if (**(short **)(&DAT_000022e0 + iVar5) == 2) {
          iVar8 = param_1 + uVar7 * 0x54;
          if (*(int *)(iVar8 + 0x1e8) == iVar1) {
            FUN_003674e4(0xb);
          }
          FUN_0036fc20(uVar2,uVar2,iVar8 + 0x1e8);
          if (*(int *)(&DAT_000022e0 + iVar5) == 0) goto LAB_00118848;
        }
        uVar6 = (uint)*(ushort *)((int)&local_40 + uVar7 * 2);
        if (uVar6 <= *(ushort *)(param_2 + 0x22b8)) {
          iVar5 = *(ushort *)(param_2 + 0x22b8) - uVar6;
          if (0x28 < iVar5) {
            iVar5 = 0x28;
          }
          fVar9 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + uVar7 * 4 + 0x18a0) = fVar4 - fVar9 * fVar3;
        }
      }
LAB_00118848:
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 < 6);
  }
  return;
}
