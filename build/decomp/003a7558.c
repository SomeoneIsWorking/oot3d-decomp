// OoT3D decomp @ 003a7558  name=FUN_003a7558  size=440

undefined4 FUN_003a7558(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  int iStack_3c;
  short *psStack_38;
  
  uVar4 = (uint)*(byte *)(param_2 + 0x3a59);
  psVar5 = (short *)(param_1 + *(int *)(param_3 + 4));
  iStack_3c = 0;
  psStack_38 = (short *)(param_2 + uVar4 * 0x80 + 0x3a5c);
  if (uVar4 < *(byte *)(param_2 + 0x3a58)) {
    do {
      if (*psVar5 == *psStack_38) {
        uVar4 = uVar4 + 1;
        psVar5 = psVar5 + 1;
        iStack_3c = iStack_3c + 1;
        psStack_38 = psStack_38 + 0x40;
      }
      else {
        puVar2 = (undefined2 *)(param_2 + uVar4 * 0x80 + 0x3a5c);
        uVar3 = uVar4;
        if ((int)uVar4 < (int)(uint)*(byte *)(param_2 + 0x3a58)) {
          do {
            *puVar2 = 0;
            if (*(int *)(puVar2 + 4) == 0) {
              FUN_0034fc6c(*(undefined4 *)(puVar2 + 2));
              *(undefined4 *)(puVar2 + 2) = 0;
            }
            else {
              FUN_00371738(param_2 + (uint)*(ushort *)(param_2 + 0x43dc) * 0x70 + 0x43e0,puVar2 + 8,
                           0x70);
              *(short *)(param_2 + 0x43dc) = *(short *)(param_2 + 0x43dc) + 1;
              *(undefined2 *)(param_2 + 0x43de) = 1;
              *(undefined4 *)(puVar2 + 2) = 0;
              *(undefined4 *)(puVar2 + 4) = 0;
            }
            uVar3 = uVar3 + 1;
            puVar2 = puVar2 + 0x40;
          } while ((int)uVar3 < (int)(uint)*(byte *)(param_2 + 0x3a58));
        }
        *(char *)(param_2 + 0x3a58) = (char)uVar4;
        FUN_00379c3c(param_2,param_2 + 0x208c);
      }
    } while ((int)uVar4 < (int)(uint)*(byte *)(param_2 + 0x3a58));
  }
  if (iStack_3c < (int)(uint)*(byte *)(param_3 + 1)) {
    do {
      iVar1 = param_2 + 0x3a58 + uVar4 * 0x80;
      *(short *)(iVar1 + 4) = -*psVar5;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      FUN_0034fc6c(*(undefined4 *)(iVar1 + 8));
      *(undefined4 *)(iVar1 + 8) = 0;
      uVar4 = uVar4 + 1;
      psVar5 = psVar5 + 1;
      iStack_3c = iStack_3c + 1;
    } while (iStack_3c < (int)(uint)*(byte *)(param_3 + 1));
  }
  *(char *)(param_2 + 0x3a58) = (char)uVar4;
  return 1;
}

