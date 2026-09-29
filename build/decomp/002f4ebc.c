// OoT3D decomp @ 002f4ebc  name=FUN_002f4ebc  size=160

void FUN_002f4ebc(int param_1)

{
  int iVar1;
  float fVar2;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;

  FUN_002f5330(param_1,&local_38);
  iVar1 = *(int *)(param_1 + 4);
  fVar2 = (DAT_002f4f5c + local_34 + local_28 + local_1c + local_10) * DAT_002f4f60;
  if (*(int *)(iVar1 + 0x24) < 1) {
    *(int *)(iVar1 + 0x18) =
         (int)((DAT_002f4f5c + local_38 + local_2c + local_20 + local_14) * DAT_002f4f60);
    *(int *)(iVar1 + 0x1c) = (int)fVar2;
    *(undefined4 *)(iVar1 + 0x24) = 5;
  }
  return;
}
