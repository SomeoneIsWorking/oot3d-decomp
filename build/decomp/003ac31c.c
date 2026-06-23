// OoT3D decomp @ 003ac31c  name=FUN_003ac31c  size=368

void FUN_003ac31c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  FUN_00376864();
  uVar1 = DAT_003ac490;
  fVar6 = DAT_003ac48c;
  *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x1000;
  uVar2 = DAT_003ac494;
  *(short *)(param_1 + 0xc0) = *(short *)(param_1 + 0xc0) + 0x1000;
  FUN_0036e168(DAT_003ac498,uVar2,uVar1,fVar6,param_1 + 0xc4);
  FUN_00376340(DAT_003ac49c,DAT_003ac49c,fVar6,param_2,param_1,5);
  bVar4 = false;
  bVar3 = false;
  if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
    bVar4 = *(float *)(param_1 + 100) < fVar6;
    bVar3 = NAN(*(float *)(param_1 + 100)) || NAN(fVar6);
  }
  if (bVar4 != bVar3) {
    if ((DAT_003ac4a0 <= *(uint *)(param_1 + 0x84)) ||
       ((int)(DAT_003ac4a0 + 0x80000000) <= (int)*(uint *)(param_1 + 0x84))) {
      FUN_00374428(param_1);
      return;
    }
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
    FUN_003717ac(param_1 + 0x1a4,DAT_003ac4a4,3);
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(param_1 + 0xbe) = 0;
    *(undefined2 *)(param_1 + 0xc0) = 0;
    *(float *)(param_1 + 0x6c) = fVar6;
    *(float *)(param_1 + 100) = fVar6;
    fVar5 = *(float *)(param_1 + 0x1f0);
    if (fVar5 == fVar6 || fVar5 < fVar6 != (NAN(fVar5) || NAN(fVar6))) {
      fVar6 = fVar5 * DAT_003ac4ac - DAT_003ac4a8;
    }
    else {
      fVar6 = DAT_003ac4a8 + fVar5 * DAT_003ac4ac;
    }
    *(short *)(DAT_003ac4b0 + param_1) = (short)(int)fVar6;
    uVar1 = DAT_003ac4b8;
    *(undefined4 *)(param_1 + 0x6a0) = DAT_003ac4b4;
    FUN_00375bcc(param_1,uVar1);
    FUN_0036f00c(DAT_003ac4c0,DAT_003ac4bc,param_2,param_1,param_1 + 0x28,0xc,0x78,10,0);
  }
  return;
}

