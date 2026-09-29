// OoT3D decomp @ 001691c8  name=FUN_001691c8  size=844

void FUN_001691c8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ushort uVar7;
  float fVar8;
  undefined4 uVar9;

  uVar1 = DAT_001694e8;
  uVar7 = *(ushort *)(param_1 + 0x1c);
  if (((int)(short)uVar7 & 0x8000U) != 0) {
    *(ushort *)(param_1 + 0x1c) =
         uVar7 & 0x1fff | ((short)((int)(short)uVar7 - 0x8000U >> 0xd) + 1) * 0x2000;
  }
  uVar7 = *(ushort *)(param_1 + 0x1c);
  if (((int)(short)uVar7 & 0xe000U) != 0) {
    *(ushort *)(param_1 + 0x1c) = uVar7 & 0xe0ff | (((short)(char)(uVar7 >> 8) & 0x1fU) - 1) * 0x100
    ;
  }
  iVar2 = DAT_001694ec;
  *(char *)(param_1 + 0x82c) = (char)*(short *)(param_1 + 0x1c);
  uVar4 = (uint)*(short *)(param_1 + 0x1c);
  uVar6 = uVar4 >> 6 & 0xc;
  if ((uVar4 & (*(uint *)(iVar2 + ((int)uVar4 >> 8 & 0x1cU) + 0xeb4) &
               *(uint *)(DAT_001694f0 + uVar6)) >> (*(uint *)(DAT_001694f4 + uVar6) & 0xff) & 0xff)
      != 0) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  FUN_00372f38(param_1,param_2,0);
  uVar7 = *(ushort *)(param_1 + 0x1c) & 0xe000;
  if ((*(ushort *)(param_1 + 0x1c) & 0xe000) != 0) {
    uVar7 = 1;
  }
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,uVar7);
  FUN_003717ac(param_1 + 0x1a4,DAT_001694f8,0);
  FUN_00372d4c(uVar1,uVar1,param_1 + 0xbc,0);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0x6a4,param_1,DAT_001694fc);
  uVar5 = FUN_0035011c(0xe);
  FUN_00350318(param_1 + 0xa0,uVar5,DAT_00169500);
  uVar5 = DAT_00169508;
  *(undefined4 *)(param_1 + 0x54) = DAT_00169504;
  if ((*(ushort *)(param_1 + 0x1c) & 0xe000) == 0) {
    *(undefined2 *)(param_1 + 0x34) = 0;
    *(undefined2 *)(param_1 + 0x38) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0x81c) = *(undefined4 *)(param_1 + 0x2c);
    fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x36));
    fVar3 = DAT_0016950c;
    *(float *)(param_1 + 0x818) = *(float *)(param_1 + 0x28) + fVar8 * DAT_0016950c;
    fVar8 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 0x820) = *(float *)(param_1 + 0x30) + fVar8 * fVar3;
    FUN_0035f324(param_1,param_2);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    uVar9 = FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + 0x4000));
    *(undefined4 *)(param_1 + 0x728) = uVar9;
    *(undefined4 *)(param_1 + 0x72c) = uVar1;
    uVar9 = FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + 0x4000));
    *(undefined4 *)(param_1 + 0x730) = uVar9;
    *(undefined4 *)(param_1 + 0x71c) = uVar1;
    *(undefined4 *)(param_1 + 0x720) = uVar5;
    *(undefined4 *)(param_1 + 0x724) = uVar1;
    uVar5 = FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    *(undefined4 *)(param_1 + 0x734) = uVar5;
    *(undefined4 *)(param_1 + 0x738) = uVar1;
    uVar5 = FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(undefined4 *)(param_1 + 0x73c) = uVar5;
    FUN_0034ecb0(param_1,param_2,1);
  }
  if (2 < *(ushort *)(param_1 + 0x1c) >> 0xd) {
    FUN_0037547c(DAT_00169518,0,4,DAT_00169514);
  }
  uVar7 = *(ushort *)(param_1 + 0x1c) >> 0xd;
  if (uVar7 != 1) {
    if (uVar7 != 2) {
      if (uVar7 != 3 && uVar7 != 4) {
        FUN_00375d3c(param_2,param_2 + 0x208c,param_1,5);
        *(undefined1 *)(param_1 + 0x123) = 0x1f;
        goto LAB_00169548;
      }
      *(undefined4 *)(param_1 + 100) = DAT_0016951c;
      *(undefined4 *)(param_1 + 0x6c) = DAT_00169520;
      *(undefined4 *)(param_1 + 0x70) = DAT_00169524;
      *(undefined1 *)(param_1 + 0x718) = 1;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar1;
  }
  *(char *)(*(int *)(param_1 + 0x6c0) + 5) = *(char *)(*(int *)(param_1 + 0x6c0) + 5) << 1;
  *(undefined1 *)(param_1 + 0x123) = 0x20;
  *(char *)(param_1 + 0xb7) = *(char *)(param_1 + 0xb7) << 1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
LAB_00169548:
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0xf,0x1e);
}
