// OoT3D decomp @ 001d6cb8  name=FUN_001d6cb8  size=704

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001d6cb8(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  undefined8 uVar10;

  FUN_003510b0(param_1,DAT_001d6e78);
  FUN_00372d4c(DAT_001d6e84,DAT_001d6e7c,param_1 + 0xbc,DAT_001d6e80);
  FUN_00372f38(param_1,param_2,param_1 + 0x7d8);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0);
  FUN_00353dd0(param_2,param_1 + 0x7f0);
  FUN_00353d24(param_2,param_1 + 0x7f0,param_1,DAT_001d6e88);
  FUN_00350d20(param_1 + 0xa0,DAT_001d6e8c + 0x40);
  if (*(short *)(param_1 + 0x1c) < 3) {
    uVar10 = FUN_0036aa20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                          *(undefined4 *)(param_1 + 0x10),param_2 + 0x208c,param_1,param_2,0x3a);
    iVar6 = (int)((ulonglong)uVar10 >> 0x20);
    if ((int)uVar10 == 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    if (*(short *)(param_1 + 0x1c) == 0) {
      iVar5 = *(int *)(param_1 + 0x128);
      bVar7 = iVar5 == 0;
      if (!bVar7) {
        iVar6 = *(int *)(iVar5 + 0x128);
      }
      bVar8 = iVar6 == 0;
      if (!bVar7 && !bVar8) {
        iVar6 = *(int *)(iVar6 + 0x128);
      }
      if ((bVar7 || bVar8) || iVar6 == 0) {
        for (; param_1 != 0; param_1 = *(int *)(param_1 + 0x128)) {
          FUN_00374428(param_1);
        }
        return;
      }
      *(int *)(iVar5 + 0x124) = param_1;
      *(int *)(*(int *)(*(int *)(param_1 + 0x128) + 0x128) + 0x124) = param_1;
      *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x128) + 0x128) + 0x128) + 0x124) = param_1;
      if (*(short *)(param_1 + 0x1c) == 0) goto LAB_001d6e20;
    }
  }
  if (*(short *)(param_1 + 0x1c) != 10) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    uVar2 = DAT_001d6e90;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(undefined4 *)(param_1 + 0x7dc) = uVar2;
    return;
  }
LAB_001d6e20:
  *(undefined4 *)(param_1 + 0x810) = 0x19;
  FUN_0036e734(param_1 + 0x1a4,0);
  fVar3 = DAT_00346700;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 8);
  uVar2 = DAT_00346704;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - fVar3;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 10) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (sVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  sVar1 = *(short *)(*(int *)(param_1 + 0x124) + 0x36) + sVar1 * 0x4000;
  *(short *)(param_1 + 0x36) = sVar1;
  fVar9 = (float)FUN_002cfca0((int)sVar1);
  fVar3 = DAT_0034670c;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar9 * DAT_0034670c;
  fVar9 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar9 * fVar3;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x36) + 0x4000;
  *(byte *)(param_1 + 0x800) = *(byte *)(param_1 + 0x800) & 0xfe;
  *(byte *)(param_1 + 0x801) = *(byte *)(param_1 + 0x801) & 0xfe;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffefff | 1;
  uVar4 = DAT_00346710;
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 0x7dc) = uVar4;
  return;
}
