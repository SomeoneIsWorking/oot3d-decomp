// OoT3D decomp @ 00195b08  name=FUN_00195b08  size=116

void FUN_00195b08(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  fVar1 = DAT_00195b7c;
  if (*(float *)(param_1 + 0x470) != DAT_00195b7c) {
    FUN_00375bcc(param_1,DAT_00195b80);
  }
  uVar4 = DAT_00195b8c;
  uVar3 = DAT_00195b88;
  uVar2 = DAT_00195b84;
  FUN_0036e168(fVar1,DAT_00195b8c,DAT_00195b88,DAT_00195b84,param_1 + 0x470);
  FUN_0036e168(fVar1,uVar4,uVar3,uVar2,param_1 + 0x474);
  return;
}
