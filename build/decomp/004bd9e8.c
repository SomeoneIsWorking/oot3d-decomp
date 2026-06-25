// OoT3D decomp @ 004bd9e8  name=FUN_004bd9e8  size=512

void FUN_004bd9e8(int param_1,undefined4 param_2)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + 1;
  fVar1 = DAT_004bdbf0;
  if (*(short *)(param_1 + 0x1c) == 3) {
    fVar3 = *(float *)(param_1 + 100);
    if (fVar3 < DAT_004bdbe8) {
      *(float *)(param_1 + 0x6c) = DAT_004bdbe8;
      *(undefined4 *)(param_1 + 0x70) = DAT_004bdbec;
      fVar4 = DAT_004bdbf8;
      if ((uint)fVar1 <= (uint)fVar3) {
        fVar3 = DAT_004bdbf4;
      }
      *(float *)(param_1 + 100) = fVar3;
      *(short *)(param_1 + 0x18) =
           *(short *)(param_1 + 0x18) + (short)(int)((fVar3 + fVar4) * DAT_004bdbfc);
      fVar3 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x92));
      fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x18));
      fVar1 = DAT_004bdc00;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + fVar3 * fVar4 * DAT_004bdc00;
      fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x92));
      fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x18));
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + fVar3 * fVar4 * fVar1;
    }
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x280;
  }
  sVar2 = *(short *)(param_1 + 0x1c);
  if ((sVar2 < 3) || (sVar2 == 0x14)) {
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x280;
  }
  else if ((0x14 < sVar2) && (sVar2 != 0x19)) {
    sVar2 = *(short *)(param_1 + 0x34);
    *(short *)(param_1 + 0x34) = sVar2 + -700;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x10b;
    *(short *)(param_1 + 0xbc) = sVar2 + -0x42bc;
  }
  if (*(int *)(param_1 + 100) < 0x40000001) {
    if ((int)(*(ushort *)(param_1 + 0xc0) + 10000) < DAT_004bdc04) {
      sVar2 = *(ushort *)(param_1 + 0xc0) + 10000;
    }
    else {
      sVar2 = -1;
    }
    *(short *)(param_1 + 0xc0) = sVar2;
  }
  fVar4 = (float)FUN_003759d0();
  fVar3 = DAT_004bdc0c;
  fVar1 = DAT_004bdc08;
  local_20 = *(float *)(param_1 + 0x28) + (fVar4 - DAT_004bdc08) * DAT_004bdc0c;
  fVar4 = (float)FUN_003759d0();
  local_1c = *(float *)(param_1 + 0x2c) + (fVar4 - fVar1) * fVar3;
  fVar4 = (float)FUN_003759d0();
  local_18 = *(float *)(param_1 + 0x30) + (fVar4 - fVar1) * fVar3;
  FUN_00374280(param_2,&local_20,DAT_004bdc14 + -0xc,DAT_004bdc14,DAT_004bdc10 + -4,DAT_004bdc10);
  if ((*(ushort *)(param_1 + 0x90) & 3) != 0) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_004bdc18;
    *(undefined2 *)(param_1 + 0xc0) = 0;
  }
  return;
}

