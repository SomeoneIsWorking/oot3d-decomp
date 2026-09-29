// OoT3D decomp @ 001224fc  name=FUN_001224fc  size=412

void FUN_001224fc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  char cVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;

  uVar3 = DAT_001226ac;
  fVar2 = DAT_001226a4;
  uVar1 = DAT_0012269c;
  fVar7 = DAT_00122698;
  cVar4 = *(char *)(param_1 + 0x203);
  if (cVar4 == '\0') {
    cVar4 = '\x01';
    *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x21c) - DAT_00122698;
    *(undefined4 *)(param_1 + 0x250) = uVar1;
  }
  else if (cVar4 == '\x01') {
    fVar6 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x250),DAT_00122698,DAT_001226a8,
                                DAT_001226a0,param_1 + 0x24c);
    *(float *)(param_1 + 0x21c) = *(float *)(param_1 + 0x24c) + fVar7;
    if (fVar6 != fVar2) {
      return;
    }
    *(undefined2 *)(param_1 + 0x264) = 0;
    cVar4 = *(char *)(param_1 + 0x203) + '\x01';
  }
  else if (cVar4 == '\x02') {
    uVar5 = *(short *)(param_1 + 0x264) + 1;
    *(ushort *)(param_1 + 0x264) = uVar5;
    if (uVar5 < 0x96) {
      return;
    }
    cVar4 = '\x03';
    *(float *)(param_1 + 0x24c) = *(float *)(param_1 + 0x21c) - fVar7;
    *(float *)(param_1 + 0x250) = fVar2;
  }
  else {
    if (cVar4 != '\x03') {
      if (cVar4 != '\x04') {
        return;
      }
      fVar7 = (float)FUN_00363f44(DAT_00122698,DAT_001226b4,param_1,param_2,param_1 + 0x24c,
                                  param_1 + 0x250,param_1 + 0x264,5,0);
      uVar1 = DAT_001226b8;
      if (fVar7 == fVar2) {
        *(undefined1 *)(param_1 + 0x200) = 0;
        *(undefined4 *)(param_1 + 0x1fc) = uVar1;
      }
      return;
    }
    fVar6 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0x250),DAT_00122698,DAT_001226ac,
                                DAT_001226a0,param_1 + 0x24c);
    *(float *)(param_1 + 0x21c) = *(float *)(param_1 + 0x24c) + fVar7;
    if (fVar6 != fVar2) {
      return;
    }
    *(undefined4 *)(param_1 + 0x24c) = uVar3;
    *(float *)(param_1 + 0x250) = fVar2;
    uVar1 = DAT_001226b0;
    *(undefined2 *)(param_1 + 0x264) = 0;
    FUN_00375bcc(param_1,uVar1);
    cVar4 = *(char *)(param_1 + 0x203) + '\x01';
  }
  *(char *)(param_1 + 0x203) = cVar4;
  return;
}
