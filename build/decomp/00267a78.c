// OoT3D decomp @ 00267a78  name=FUN_00267a78  size=488

void FUN_00267a78(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  undefined2 uVar6;
  uint in_fpscr;
  float fVar7;

  FUN_0037572c(DAT_00267c60);
  *(short *)(param_1 + 0x1be) = *(short *)(param_1 + 0x1be) + 1;
  if (1 < *(short *)(param_1 + 0x1b8)) {
    *(short *)(param_1 + 0x1b8) = *(short *)(param_1 + 0x1b8) + -1;
  }
  if (*(short *)(param_1 + 0x1ba) != 0) {
    *(short *)(param_1 + 0x1ba) = *(short *)(param_1 + 0x1ba) + -1;
  }
  if (*(short *)(param_1 + 0x1bc) != 0) {
    *(short *)(param_1 + 0x1bc) = *(short *)(param_1 + 0x1bc) + -1;
  }
  uVar2 = DAT_00267c6c;
  uVar1 = DAT_00267c68;
  sVar5 = *(short *)(param_1 + 0x1c6);
  if (sVar5 != 0) {
    if (sVar5 == 1) {
      *(undefined1 *)(param_1 + 0x1b4) = 1;
      *(undefined2 *)(param_1 + 0x1b6) = 1;
      *(undefined4 *)(param_1 + 0x1a4) = uVar1;
    }
    else if (sVar5 == 2) {
      *(undefined1 *)(param_1 + 0x1b4) = 0;
      *(undefined2 *)(param_1 + 0x1b6) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = uVar2;
    }
    else if (sVar5 == 3) {
      *(undefined4 *)(param_1 + 0x1a4) = DAT_00267c64;
    }
  }
  if (*(short *)(param_1 + 0x116) != 0) {
    FUN_0037322c(DAT_00267c70,param_1);
  }
  uVar1 = DAT_00267c74;
  if (*(short *)(param_1 + 0x1c6) != 0) {
    *(undefined2 *)(param_1 + 0x1c6) = 0;
  }
  if ((*(short *)(param_1 + 0x1bc) == 0) &&
     (sVar5 = *(short *)(param_1 + 0x1c4) + 1, *(short *)(param_1 + 0x1c4) = sVar5, 2 < sVar5)) {
    *(undefined2 *)(param_1 + 0x1c4) = 0;
    fVar7 = (float)FUN_00371e50(uVar1);
    fVar4 = DAT_00267c7c;
    fVar3 = DAT_00267c78;
    if ((short)(int)fVar7 + 0x14 < 1) {
      fVar7 = (float)FUN_00371e50(uVar1);
      fVar7 = (float)VectorSignedToFloat((short)(int)fVar7 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = (undefined2)(int)(fVar7 * fVar3 * fVar4 - fVar4);
    }
    else {
      fVar7 = (float)FUN_00371e50(uVar1);
      fVar7 = (float)VectorSignedToFloat((short)(int)fVar7 + 0x14,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = (undefined2)(int)(fVar4 + fVar7 * fVar3 * fVar4);
    }
    *(undefined2 *)(param_1 + 0x1bc) = uVar6;
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_00376864(param_1);
  FUN_00376340(DAT_00267c80,DAT_00267c80,uVar1,param_2,param_1,0x1d);
  FUN_0037632c(param_1,param_1 + 0x1d4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1d4);
  return;
}
