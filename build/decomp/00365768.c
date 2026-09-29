// OoT3D decomp @ 00365768  name=FUN_00365768  size=228

void FUN_00365768(float param_1,float param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined2 param_5,int param_6,undefined1 param_7)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;

  iVar3 = 0;
  if (0 < param_6) {
    while (*(char *)(param_3 + 9) != '\0') {
      param_3 = param_3 + 0x10;
      iVar3 = (int)(short)((short)iVar3 + 1);
      if (param_6 <= iVar3) {
        return;
      }
    }
    *(undefined1 *)((int)param_3 + 0x26) = 0;
    *(undefined1 *)(param_3 + 9) = param_7;
    fVar2 = DAT_00365850;
    puVar1 = DAT_0036584c;
    uVar4 = param_4[1];
    uVar5 = param_4[2];
    *param_3 = *param_4;
    param_3[1] = uVar4;
    param_3[2] = uVar5;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    param_3[3] = *puVar1;
    param_3[4] = uVar4;
    param_3[5] = uVar5;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    param_3[6] = *puVar1;
    param_3[7] = uVar4;
    param_3[8] = uVar5;
    param_3[0xc] = param_1 * fVar2;
    param_3[0xd] = param_2 * fVar2;
    fVar2 = DAT_0036585c;
    fVar6 = param_2 * DAT_00365850 - param_1 * DAT_00365850;
    if ((int)param_1 <= DAT_00365854) {
      *(undefined2 *)((int)param_3 + 0x2a) = param_5;
      *(undefined2 *)(param_3 + 0xb) = 1;
      param_3[0xe] = fVar6 * fVar2;
      return;
    }
    *(undefined2 *)((int)param_3 + 0x2a) = 0;
    fVar2 = DAT_00365858;
    *(undefined2 *)((int)param_3 + 0x2e) = param_5;
    *(undefined2 *)(param_3 + 0xb) = 0;
    param_3[0xe] = fVar6 * fVar2;
  }
  return;
}
