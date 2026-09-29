// OoT3D decomp @ 0026e080  name=FUN_0026e080  size=280

void FUN_0026e080(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  int iVar3;
  int extraout_r2;
  bool bVar4;

  iVar3 = *(int *)(param_1 + 0x128);
  sVar1 = *(short *)(param_1 + 0x1c);
  if (iVar3 == 0) {
    if (*(short *)(param_1 + 0x14) == 0) {
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(DAT_0026e198 + param_1);
    }
    iVar3 = FUN_00364670(param_1,param_1 + 0x1c74,param_2,(int)(short)(sVar1 + 8),0);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x128) = param_1;
    }
  }
  else {
    if (*(short *)(param_1 + 0x14) == 0) {
      bVar4 = sVar1 == 4;
      uVar2 = 10;
      if (bVar4) {
        sVar1 = -1;
      }
      *(undefined1 *)(param_1 + 0xb7) = 10;
      if (bVar4) {
        *(short *)(param_1 + 0x1c) = sVar1;
      }
      else {
        FUN_00375d3c(param_2,param_2 + 0x208c,param_1,5);
        uVar2 = extraout_r1;
        iVar3 = extraout_r2;
      }
      *(undefined4 *)(param_1 + 0x128) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      FUN_0035f090(param_1,uVar2,iVar3,param_4);
      return;
    }
    if ((sVar1 == 5) && (iVar3 = FUN_00369334(DAT_0026e19c,param_2,param_1,2,5), iVar3 == 0)) {
      FUN_00374444(param_2,param_1,param_1 + 0x28,0xd0);
      iVar3 = *(int *)(param_1 + 0x124);
      if (iVar3 != 0) {
        *(short *)(iVar3 + 0x18) = *(short *)(iVar3 + 0x18) + -1;
      }
      FUN_00374428(param_1);
      return;
    }
  }
  return;
}
