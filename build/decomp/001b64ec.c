// OoT3D decomp @ 001b64ec  name=FUN_001b64ec  size=380

void FUN_001b64ec(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];

  FUN_003510b0(param_1,DAT_001b6668);
  iVar4 = FUN_0037571c(param_2);
  if (iVar4 != 0) {
    *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xfc) + DAT_001b666c;
  }
  FUN_00353dd0(param_2,param_1 + 0x1a8);
  FUN_00353d24(param_2,param_1 + 0x1a8,param_1,DAT_001b6670);
  FUN_0037632c(param_1,param_1 + 0x1a8);
  FUN_00350d20(param_1 + 0xa0,0,DAT_001b6674);
  if (*(short *)(param_1 + 0xbe) == 0) {
    fVar5 = (float)FUN_00371e50(DAT_001b6678);
    uVar1 = (undefined2)(int)fVar5;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    *(undefined2 *)(param_1 + 0x16) = uVar1;
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
  }
  fVar5 = DAT_001b667c;
  local_28 = *(undefined4 *)(param_1 + 0x28);
  local_24 = *(float *)(param_1 + 0x2c) + DAT_001b6680;
  local_20 = *(undefined4 *)(param_1 + 0x30);
  fVar6 = (float)FUN_0036e81c(param_2 + 0xa98,auStack_1c,auStack_2c,param_1,&local_28);
  if ((uint)fVar6 < (uint)DAT_001b6684) {
    *(float *)(param_1 + 0x2c) = fVar6 + fVar5;
    FUN_0036df4c(param_1 + 8,param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x204) = 0;
    *(undefined4 *)(param_1 + 0x208) = 0;
    *(undefined4 *)(param_1 + 0x20c) = 0;
    cVar3 = FUN_00363c10(param_2 + 0x3a58,
                         (int)*(short *)(DAT_001b6688 + (*(ushort *)(param_1 + 0x1c) & 3) * 2));
    *(char *)(param_1 + 0x202) = cVar3;
    uVar2 = DAT_001b668c;
    if (-1 < cVar3) {
      *(undefined2 *)(param_1 + 0x200) = 0;
      *(undefined4 *)(param_1 + 0x1a4) = uVar2;
      return;
    }
  }
  FUN_00374428(param_1);
  return;
}
