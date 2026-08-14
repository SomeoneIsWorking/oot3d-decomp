// OoT3D decomp @ 0024e4e8  name=FUN_0024e4e8  size=520

void FUN_0024e4e8(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  func_0x00372224(&fStack_48,param_1 + 0x148);
  if (*(short *)(param_1 + 0x1c) < 200) {
    if (*(int *)(param_1 + 0x220) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x220) + 0xac) = 1;
      func_0x003721e0(*(undefined4 *)(param_1 + 0x220),&fStack_48);
      func_0x00372170(*(undefined4 *)(param_1 + 0x220),0);
    }
    fVar2 = fRam0024e6f8;
    fVar1 = fRam0024e6f4;
    if (*(int *)(param_1 + 0x224) != 0) {
      fVar4 = *(float *)(param_1 + 0x218) + fRam0024e6f0;
      *(float *)(param_1 + 0x218) = fVar4;
      if (0x3f800000 < (int)fVar4) {
        fVar4 = fVar1;
      }
      *(float *)(param_1 + 0x218) = fVar4;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      fStack_4c = fVar1 - *(float *)(param_1 + 0x1bc) * fVar2;
      iVar3 = *(int *)(*(int *)(param_1 + 0x224) + 0x10);
      func_0x003688a8(iVar3,0,4,&uStack_58);
      uStack_50 = uRam0024e6fc;
      *(undefined1 *)(*(int *)(iVar3 + 4) + 0xe) = 1;
      uStack_54 = *(undefined4 *)(param_1 + 0x28);
      fStack_4c = *(float *)(param_1 + 0x30);
      uStack_2c = uStack_50;
      fStack_20 = *(float *)(param_1 + 0x1b8) * *(float *)(param_1 + 0x218);
      fStack_48 = fStack_20 * 1.0;
      fStack_38 = fStack_20 * 0.0;
      fStack_28 = fStack_20 * 0.0;
      fStack_44 = fVar1 * 0.0;
      fStack_34 = fVar1 * 1.0;
      fStack_24 = fVar1 * 0.0;
      fStack_40 = fStack_20 * 0.0;
      fStack_30 = fStack_20 * 0.0;
      fStack_20 = fStack_20 * 1.0;
      *(undefined1 *)(*(int *)(param_1 + 0x224) + 0xac) = 1;
      uStack_3c = uStack_54;
      uStack_1c = fStack_4c;
      func_0x003721e0(*(undefined4 *)(param_1 + 0x224),&fStack_48);
      func_0x00372170(*(undefined4 *)(param_1 + 0x224),0);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x21c) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x21c) + 0xac) = 1;
    func_0x003721e0(*(undefined4 *)(param_1 + 0x21c),&fStack_48);
    func_0x00372170(*(undefined4 *)(param_1 + 0x21c),0);
  }
  return;
}

