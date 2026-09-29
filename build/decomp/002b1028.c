// OoT3D decomp @ 002b1028  name=FUN_002b1028  size=212

void FUN_002b1028(undefined4 param_1,int param_2)

{
  undefined4 uVar1;

  FUN_0036e734(param_2 + 0x1a4,1);
  uVar1 = DAT_002b1108;
  if (*(int *)(param_2 + 0x524) == 3) {
    *(undefined4 *)(param_2 + 0x6c) = DAT_002b10fc;
    uVar1 = DAT_002b1100;
    *(undefined2 *)(param_2 + 0x53c) = 1;
    *(undefined4 *)(param_2 + 0x534) = 0;
    *(undefined4 *)(param_2 + 0x70) = uVar1;
    uVar1 = DAT_002b1104;
    *(undefined4 *)(param_2 + 0x530) = 0;
    *(undefined4 *)(param_2 + 100) = uVar1;
    *(ushort *)(param_2 + 0x90) = *(ushort *)(param_2 + 0x90) & 0xfffe;
  }
  else {
    *(undefined1 *)(param_2 + 0xb7) = 4;
    *(undefined4 *)(param_2 + 0x6c) = uVar1;
    *(undefined4 *)(param_2 + 0x534) = 0;
    *(undefined2 *)(param_2 + 0x53c) = 0;
    *(undefined4 *)(param_2 + 0x70) = uVar1;
    *(undefined4 *)(param_2 + 0x530) = 2;
    *(undefined4 *)(param_2 + 100) = uVar1;
    *(float *)(param_2 + 0x2c) = *(float *)(param_2 + 0x2c) - DAT_002b110c;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_2 + 0x30);
    *(ushort *)(param_2 + 0x90) = *(ushort *)(param_2 + 0x90) & 0xfffe;
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) & 0xfffffffe;
  }
  *(undefined4 *)(param_2 + 0x524) = 7;
  *(undefined4 *)(param_2 + 0x52c) = DAT_002b1110;
  return;
}
