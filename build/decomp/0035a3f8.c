// OoT3D decomp @ 0035a3f8  name=FUN_0035a3f8  size=148

void FUN_0035a3f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;

  uVar2 = DAT_0035a490;
  uVar1 = DAT_0035a48c;
  fVar5 = *(float *)(param_1 + 0xd4c) + *(float *)(param_1 + 0xd60);
  *(float *)(param_1 + 0xd5c) = fVar5;
  FUN_00373500(fVar5,uVar2,uVar1,param_1 + 0x2c);
  FUN_00373500(uVar1,uVar2,DAT_0035a494,param_1 + 0xd60);
  iVar3 = FUN_0037571c(param_2);
  iVar4 = (int)(short)(int)*(float *)(param_1 + 0xd64);
  if (iVar3 == 0) {
    fVar5 = (float)FUN_002cfca0(iVar4);
  }
  else {
    fVar5 = (float)FUN_002cfca0(iVar4);
    fVar5 = fVar5 * DAT_0035a498;
  }
  *(float *)(param_1 + 100) = fVar5;
  return;
}
