// OoT3D decomp @ 001caaac  name=FUN_001caaac  size=244

void FUN_001caaac(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  uVar1 = DAT_001caba0;
  local_20 = DAT_001caba0;
  local_1c = DAT_001caba4;
  local_18 = DAT_001caba0;
  local_2c = DAT_001caba0;
  local_28 = DAT_001caba0;
  local_24 = DAT_001caba0;
  fVar5 = DAT_001caba8;
  if (*(short *)(param_1 + 0x1aa) == 2) {
    fVar5 = DAT_001cabac;
  }
  if (*(float *)(param_1 + 0x94) < fVar5 * fVar5) {
    iVar2 = *(int *)(param_1 + 0x124);
    if (iVar2 != 0) {
      param_3 = *(int *)(iVar2 + 0x13c);
    }
    if (iVar2 != 0 && param_3 != 0) {
      *(undefined2 *)(iVar2 + 0x8b2) = 1;
    }
    uVar3 = 100;
    uVar4 = 0x1e;
    if (*(short *)(param_1 + 0x1aa) == 2) {
      uVar3 = 0x14;
      uVar4 = 6;
    }
    FUN_0036f95c(param_2,param_1 + 0x28,&local_2c,&local_20,uVar3,uVar4);
    FUN_00374bb8(DAT_001cabb0,uVar1,param_2,param_1,(int)*(short *)(param_1 + 0x92));
    FUN_00375bcc(param_1,DAT_001cabb4);
    FUN_00374428(param_1);
  }
  return;
}
