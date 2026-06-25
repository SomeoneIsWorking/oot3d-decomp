// OoT3D decomp @ 00367c60  name=FUN_00367c60  size=24

void FUN_00367c60(int param_1,int param_2)

{
  *(int *)(param_2 + 0xd0) = param_1;
  if (param_1 < 0x34000001) {
    param_1 = DAT_00367c78;
  }
  *(int *)(param_2 + 0xd0) = param_1;
  return;
}

