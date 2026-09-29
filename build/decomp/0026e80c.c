// OoT3D decomp @ 0026e80c  name=FUN_0026e80c  size=432

void FUN_0026e80c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  iVar2 = *(int *)(DAT_0026e9bc + param_2);
  uVar3 = *(uint *)(iVar2 + 0x1714);
  if ((uVar3 & 0x80) != 0) {
    if (*(int *)(iVar2 + 0x124) == param_1) {
      *(uint *)(iVar2 + 0x1714) = uVar3 & 0xffffff7f;
      *(undefined4 *)(iVar2 + 0x124) = 0;
      *(undefined2 *)(iVar2 + 0x2238) = 200;
    }
    else if (*(int *)(param_1 + 0x98) < DAT_0026e9c0) {
      *(uint *)(iVar2 + 0x1714) = uVar3 & 0xffffff7f;
      *(undefined2 *)(iVar2 + 0x2238) = 200;
    }
  }
  FUN_00375a18(param_1 + 0x370,0,1,2000,0);
  iVar2 = FUN_00375a18(param_1 + 0x36e,DAT_0026e9c4,1,2000,0);
  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_0026e9c8;
  if (iVar2 == 0) {
    local_1c = *(undefined4 *)(param_1 + 0x28);
    uStack_18 = *(undefined4 *)(param_1 + 0x2c);
    uStack_14 = *(undefined4 *)(param_1 + 0x30);
    fVar4 = *(float *)(param_1 + 0xc4);
    if (*(short *)(param_1 + 0x368) == 0) {
      *(float *)(param_1 + 0xc4) = fVar4 + DAT_0026e9d4;
      FUN_0037378c(uVar1,param_2,&local_1c,1,0x5a,0x14,1);
      if (*(float *)(param_1 + 0xc4) == DAT_0026e9d8) {
        FUN_003479ec(param_1);
      }
      return;
    }
    if ((uint)fVar4 < (uint)DAT_0026e9cc) {
      *(float *)(param_1 + 0xc4) = fVar4 - DAT_0026e9d0;
      FUN_0037378c(uVar1,param_2,&local_1c,1,0x5a,0x14,1);
    }
    else {
      *(short *)(param_1 + 0x368) = *(short *)(param_1 + 0x368) + -1;
      if (*(int *)(param_1 + 0x124) != 0) {
        if (*(short *)(*(int *)(param_1 + 0x124) + 0x1c) == 10) {
          FUN_00374428(param_1);
        }
        return;
      }
    }
  }
  return;
}
