// OoT3D decomp @ 003d4e70  name=FUN_003d4e70  size=180

void FUN_003d4e70(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;

  fVar1 = DAT_003d4f24;
  if (*(float *)(param_1 + 0x6c) < DAT_003d4f24) {
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) + DAT_003d4f28;
  }
  if (*(float *)(param_1 + 100) <= fVar1) {
    iVar2 = FUN_00363108(DAT_003d4f2c,param_1,param_2,(int)*(short *)(param_1 + 0x36));
    if (iVar2 == 0) {
      *(float *)(param_1 + 0x6c) = fVar1;
    }
  }
  iVar2 = FUN_003731e0(param_1 + 0x1bc);
  if (iVar2 != 0) {
    FUN_003660fc(DAT_003d4f30,param_1 + 0x1bc,0);
    *(float *)(param_1 + 0x6c) = fVar1;
    *(undefined2 *)(param_1 + 0x452) = 3;
    *(undefined4 *)(param_1 + 0x448) = 10;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(undefined4 *)(param_1 + 0x44c) = DAT_003d4f34;
    *(undefined2 *)(param_1 + 0x45a) = 0x60;
    *(undefined2 *)(param_1 + 0x45c) = 0;
  }
  return;
}
