// OoT3D decomp @ 00105e58  name=FUN_00105e58  size=504

void FUN_00105e58(int param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;

  uVar3 = *(ushort *)(param_1 + 0x90);
  if ((uVar3 & 2) != 0) {
    if (*(short *)(param_1 + 0x1c) != 0x40) {
      *(undefined1 *)(param_1 + 0x7f8) = 0;
      *(byte *)(param_1 + 0x7f5) = *(byte *)(param_1 + 0x7f5) & 0xfb;
      *(undefined2 *)(param_1 + 0x7de) = 0;
    }
    if (0xc0800000 < *(uint *)(param_1 + 100)) {
      if (DAT_00106050 < *(int *)(param_1 + 0x54)) {
        FUN_00375bcc(param_1,DAT_00106054);
      }
      else {
        FUN_00375bcc(param_1,DAT_00106058);
      }
    }
  }
  fVar5 = DAT_0010605c;
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
    *(float *)(param_1 + 0x6c) = DAT_0010605c;
  }
  if ((uVar3 & 1) != 0) {
    FUN_003705a0(fVar5,DAT_00106060,param_1 + 0x6c);
  }
  fVar9 = *(float *)(param_1 + 0x6c);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar5) << 0x1f | (uint)(fVar9 == fVar5) << 0x1e;
  uVar8 = uVar2 | (uint)(NAN(fVar9) || NAN(fVar5)) << 0x1c;
  bVar4 = (byte)(uVar2 >> 0x18);
  if ((!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar8 >> 0x1c) & 1)) &&
     ((int)(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x84)) < DAT_00106064)) {
    FUN_00370448(param_1,param_2);
  }
  iVar6 = FUN_003731e0(param_1 + 0x1a4);
  if ((iVar6 != 0) &&
     (((*(short *)(param_1 + 0x7dc) == 0 ||
       (sVar1 = *(short *)(param_1 + 0x7dc) + -1, *(short *)(param_1 + 0x7dc) = sVar1, sVar1 == 0))
      && ((uVar3 & 1) != 0)))) {
    if (*(int *)(param_1 + 0x1ec) < DAT_00106068) {
      uVar7 = FUN_0036ae14(param_1 + 0x1a4,2);
      uVar7 = VectorSignedToFloat(uVar7,(byte)(uVar8 >> 0x15) & 3);
      FUN_0037043c(uVar7,param_1 + 0x1a4);
    }
    else if (*(short *)(param_1 + 0x1c) == 0x40) {
      FUN_00373d40(param_1 + 0x1a4,10);
      *(undefined2 *)(param_1 + 0x7dc) = 0;
      *(short *)(param_1 + 0x7e2) = *(short *)(param_1 + 0x7e2) + 0x5dc;
      *(undefined1 *)(param_1 + 0x7f8) = 0xc;
      *(byte *)(param_1 + 0x7f5) = *(byte *)(param_1 + 0x7f5) | 4;
      *(undefined2 *)(param_1 + 0x7de) = 0x28;
      *(undefined4 *)(param_1 + 0x7d8) = DAT_0010606c;
    }
    else {
      FUN_00370410(param_1);
      *(undefined2 *)(param_1 + 0x7e2) = 0x4b;
    }
  }
  FUN_00370378(param_1 + 0xbc,0,0x140);
  FUN_00372aa8(param_1 + 0x7e0,DAT_00106070,100);
  return;
}
