// OoT3D decomp @ 00105358  name=FUN_00105358  size=216

void FUN_00105358(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  iVar3 = *(int *)(DAT_00105430 + param_2);
  fVar2 = *(float *)(param_1 + 0x28);
  fVar4 = *(float *)(param_1 + 0x30);
  fVar5 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
  fVar1 = DAT_00105434;
  fVar5 = fVar5 * DAT_00105434;
  fVar6 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
  iVar3 = FUN_003758b0(*(float *)(iVar3 + 0x30) - (fVar4 + fVar6 * fVar1),
                       *(float *)(iVar3 + 0x28) - (fVar2 + fVar5));
  if (iVar3 + 0x4000U < 0x8001) {
    if (*(short *)(param_1 + 0xd88) == 2) {
      FUN_00371680(param_2,4,0);
      *(undefined2 *)(param_1 + 0xd88) = 0;
      return;
    }
  }
  else {
    FUN_003716f0(param_2,DAT_00105438,0x14,5);
    *(undefined4 *)(param_1 + 0x3fc) = DAT_0010543c;
  }
  return;
}
