// OoT3D decomp @ 003d9918  name=FUN_003d9918  size=232

void FUN_003d9918(int param_1)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;

  iVar4 = FUN_003705a0(*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x58) * DAT_003d9a00,
                       DAT_003d9a04,param_1 + 0x2c);
  if (iVar4 != 0) {
    cVar1 = *(char *)(param_1 + 0x1a8);
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x1a9) != '\x02') {
        if (*(char *)(param_1 + 0x1a9) == '\0') {
          *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + cVar1 * -0x1800;
        }
        else {
          *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x16);
          *(undefined1 *)(param_1 + 0x1a9) = 0;
        }
        iVar4 = (int)(short)(*(short *)(param_1 + 0xbe) + cVar1 * -0x4000);
        fVar5 = (float)FUN_002cfca0(iVar4);
        fVar2 = DAT_003d9a0c;
        *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar5 * DAT_003d9a0c;
        fVar5 = (float)FUN_00338f60(iVar4);
        uVar3 = DAT_003d9a10;
        *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar5 * fVar2;
        *(undefined4 *)(param_1 + 0x1a4) = uVar3;
        return;
      }
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003d9a08;
    *(undefined2 *)(param_1 + 0x1aa) = 0xe1;
  }
  return;
}
