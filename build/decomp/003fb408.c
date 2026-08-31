// OoT3D decomp @ 003fb408  name=FUN_003fb408  size=180

void FUN_003fb408(int param_1,float *param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fStack_38;
  float fStack_34;
  float fStack_30;

  pfVar1 = pfRam003fb4c4;
  fVar4 = fRam003fb4bc;
  if (fRam003fb4bc <= *(float *)(param_1 + 0x58)) {
    uVar2 = func_0x003478bc(*(undefined4 *)(param_1 + 0x27c),0x10);
    func_0x00313c18(param_1,uVar2,&fStack_38);
    *param_2 = fStack_38;
    param_2[1] = fStack_34;
    param_2[2] = fStack_30;
    return;
  }
  if (((*puRam003fb4c0 & 1) == 0) && (iVar3 = func_0x003679b4(puRam003fb4c0), iVar3 != 0)) {
    *pfVar1 = fVar4;
    pfVar1[1] = fVar4;
    pfVar1[2] = fVar4;
  }
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  *param_2 = *pfVar1;
  param_2[1] = fVar4;
  param_2[2] = fVar5;
  return;
}
