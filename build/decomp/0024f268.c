// OoT3D decomp @ 0024f268  name=FUN_0024f268  size=932

void FUN_0024f268(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;

  iVar6 = DAT_0024f618;
  uVar5 = DAT_0024f614;
  uVar11 = DAT_0024f610;
  uVar4 = DAT_0024f60c;
  if ((*(byte *)(param_1 + 0x7f9) & 2) != 0) {
    *(byte *)(param_1 + 0x7f9) = *(byte *)(param_1 + 0x7f9) & 0xfd;
    FUN_00375fd0(param_1,param_1 + 0x800,1);
    cVar1 = *(char *)(param_1 + 0xb9);
    bVar12 = cVar1 == '\0';
    if (bVar12) {
      cVar1 = *(char *)(param_1 + 0xb8);
    }
    if (!bVar12 || cVar1 != '\0') {
      iVar9 = FUN_00375eb8(param_1);
      if (iVar9 == 0) {
        FUN_00375b70(param_2,param_1);
        FUN_00375bcc(param_1,DAT_0024f61c);
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      }
      else if (*(char *)(param_1 + 0xb8) != '\0') {
        FUN_00375bcc(param_1,DAT_0024f620);
      }
      iVar9 = DAT_0024f624;
      cVar1 = *(char *)(param_1 + 0xb9);
      if (cVar1 == '\x04' || cVar1 == '\x01') {
        if (*(int *)(param_1 + 0x7dc) != DAT_0024f624) {
          FUN_00375c08(DAT_0024f628,uVar11,uVar4,uVar5,param_1 + 0x1a4,2);
          *(undefined4 *)(param_1 + 0x6c) = uVar11;
          if (*(char *)(param_1 + 0xb9) == '\x04') {
            FUN_00375ed8(param_1,0x800000,0xff,0,0x50);
          }
          else {
            FUN_00375ed8(param_1,0,0xff,0,0x50);
            FUN_00375bcc(param_1,DAT_0024f62c);
          }
          *(undefined2 *)(param_1 + 0x7e0) = 0x78;
          *(int *)(param_1 + 0x7dc) = iVar9;
        }
      }
      else {
        if (cVar1 == '\x02') {
          FUN_00330254(param_2,param_1,param_1 + 0x28,0x28,0x28);
        }
        FUN_00374a58(uVar5,param_1 + 0x1a4,0);
        if ((**(uint **)(param_1 + 0x824) & DAT_0024f630) == 0) {
          sVar8 = FUN_0036e800(param_1,*(undefined4 *)(param_1 + 0x7f0));
          *(short *)(param_1 + 0x36) = sVar8 + -0x8000;
        }
        else {
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0x7f0) + 0x36);
        }
        FUN_00375ed8(param_1,0x400000,0xff,0,0x14);
        *(undefined4 *)(param_1 + 0x6c) = DAT_0024f634;
        *(undefined4 *)(param_1 + 100) = DAT_0024f638;
        *(int *)(param_1 + 0x7dc) = iVar6;
      }
    }
  }
  (**(code **)(param_1 + 0x7dc))(param_1,param_2);
  iVar10 = *(int *)(param_1 + 0x7dc);
  bVar12 = iVar10 != DAT_0024f63c;
  iVar9 = DAT_0024f63c;
  if (bVar12) {
    iVar9 = DAT_0024f640;
  }
  bVar13 = iVar10 != iVar9;
  if (bVar12 && bVar13) {
    iVar9 = DAT_0024f644;
  }
  iVar3 = iVar9;
  if ((bVar12 && bVar13) && iVar10 != iVar9) {
    iVar3 = DAT_0024f648;
  }
  if (((bVar12 && bVar13) && iVar10 != iVar9) && iVar10 != iVar3) {
    if (iVar10 != DAT_0024f64c) {
      FUN_00376864(param_1);
    }
    uVar7 = DAT_0024f654;
    iVar9 = DAT_0024f650;
    if (*(int *)(param_1 + 0x7dc) == DAT_0024f650) {
      fVar15 = *(float *)(param_1 + 0x7e4);
      uVar14 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x2c) == fVar15) << 0x1e |
               (uint)(fVar15 <= *(float *)(param_1 + 0x2c)) << 0x1d;
      bVar2 = (byte)(uVar14 >> 0x18);
      if (!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) {
        *(float *)(param_1 + 0x2c) = fVar15;
        *(undefined4 *)(param_1 + 100) = uVar11;
        uVar11 = FUN_0036ae14(param_1 + 0x1a4,2);
        uVar11 = VectorSignedToFloat(uVar11,(byte)(uVar14 >> 0x15) & 3);
        FUN_00375c08(DAT_0024f65c,DAT_0024f658,uVar11,uVar5,param_1 + 0x1a4,2);
        FUN_0036f00c(DAT_0024f660,uVar4,param_2,param_1,param_1 + 0x28,6,300,100,1);
        FUN_00375bcc(param_1,DAT_0024f664);
        *(undefined4 *)(param_1 + 0x7dc) = DAT_0024f668;
      }
    }
    else {
      FUN_00376340(uVar4,DAT_0024f654,uVar11,param_2,param_1,0x1d);
    }
    iVar10 = DAT_0024f66c;
    if (*(int *)(param_1 + 0x7dc) != DAT_0024f66c && *(int *)(param_1 + 0x7dc) != iVar9) {
      FUN_0037632c(param_1);
      FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x7e8);
      if (((*(int *)(param_1 + 0x7dc) != iVar6) && ((*(ushort *)(param_1 + 0x90) & 1) != 0)) &&
         (*(short *)(param_1 + 0x118) == 0)) {
        FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x7e8);
      }
    }
    FUN_0037322c(uVar7,param_1);
    if (*(int *)(param_1 + 0x7dc) != iVar6 && *(int *)(param_1 + 0x7dc) != iVar10) {
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
    }
  }
  return;
}
