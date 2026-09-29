// OoT3D decomp @ 003b8bd4  name=FUN_003b8bd4  size=528

void FUN_003b8bd4(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  undefined4 uVar10;

  uVar6 = DAT_003b8e1c;
  fVar3 = DAT_003b8e18;
  fVar2 = DAT_003b8e14;
  if (*(int *)(param_1 + 0x1d4) == 9 || *(int *)(param_1 + 0x1d4) == 0xb) {
    uVar10 = *(undefined4 *)(param_1 + 0x1e4);
    fVar9 = *(float *)(param_1 + 0x1e0) - *(float *)(param_1 + 0x478);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar9 == DAT_003b8e18) << 0x1e |
               (uint)(DAT_003b8e18 <= fVar9) << 0x1d;
    bVar1 = (byte)(in_fpscr >> 0x18);
    if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
      fVar9 = DAT_003b8e14;
    }
    *(float *)(param_1 + 0x1e4) = fVar9;
    iVar4 = FUN_0036b1e0(uVar6,param_1 + 0x1a4);
    if (iVar4 != 0) {
      if (*(short *)(param_1 + 0x476) != 0) {
        FUN_00319ae8(param_1 + 0x28,DAT_003b8e20,2);
      }
      *(short *)(param_1 + 0x476) = 1 - *(short *)(param_1 + 0x476);
    }
    *(undefined4 *)(param_1 + 0x1e4) = uVar10;
    *(undefined4 *)(param_1 + 0x478) = *(undefined4 *)(param_1 + 0x1e0);
  }
  if (*(int *)(param_1 + 0x1d4) == 0xf) {
    iVar4 = FUN_0036b1e0(DAT_003b8e24,param_1 + 0x1a4);
    if (iVar4 != 0) {
      FUN_00375bcc(param_1,DAT_003b8e28);
    }
    if (*(int *)(param_1 + 0x1d4) == 0xf) {
      *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x1e0);
      *(float *)(param_1 + 0x1e4) = fVar2;
      goto LAB_003b8cc4;
    }
  }
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_1 + 0x3f4);
  *(float *)(param_1 + 0x1e4) = fVar3;
LAB_003b8cc4:
  iVar4 = FUN_003731e0(param_1 + 0x1a4);
  uVar7 = (uint)*(byte *)(param_1 + 0x219);
  *(float *)(*(int *)(param_1 + 0x21c) + uVar7 * 0x34 + 0xc) = fVar3;
  *(float *)(*(int *)(param_1 + 0x21c) + uVar7 * 0x34 + 0x1c) = fVar3;
  *(float *)(*(int *)(param_1 + 0x21c) + uVar7 * 0x34 + 0x2c) = fVar3;
  if (iVar4 == 0) {
    fVar9 = *(float *)(param_1 + 0x1e0);
    fVar8 = *(float *)(param_1 + 0x3f8);
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e;
    in_fpscr = uVar7 | (uint)(NAN(fVar9) || NAN(fVar8)) << 0x1c;
    bVar1 = (byte)(uVar7 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      return;
    }
  }
  iVar5 = (int)*(short *)(param_1 + 0x45e) % 8;
  *(short *)(param_1 + 0x45e) = (short)iVar5;
  *(short *)(param_1 + 0x460) = (short)iVar5;
  iVar4 = DAT_003b8e40;
  if (iVar5 != 3 && iVar5 != 4) {
    uVar6 = FUN_0036ae14(param_1 + 0x1a4,
                         *(undefined4 *)(DAT_003b8e40 + *(short *)(param_1 + 0x45e) * 4));
    uVar6 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(fVar2,fVar3,uVar6,DAT_003b8e44,param_1 + 0x1a4,
                 *(undefined4 *)(iVar4 + *(short *)(param_1 + 0x45e) * 4),2);
    uVar7 = (uint)*(byte *)(param_1 + 0x219);
    *(float *)(*(int *)(param_1 + 0x21c) + uVar7 * 0x34 + 0xc) = fVar3;
    *(float *)(*(int *)(param_1 + 0x21c) + uVar7 * 0x34 + 0x1c) = fVar3;
    *(float *)(*(int *)(param_1 + 0x21c) + uVar7 * 0x34 + 0x2c) = fVar3;
    return;
  }
  FUN_0037547c(DAT_003b8e34,param_1 + 0x28,4,DAT_003b8e30,DAT_003b8e30,DAT_003b8e2c);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
