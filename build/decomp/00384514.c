// OoT3D decomp @ 00384514  name=FUN_00384514  size=364

void FUN_00384514(undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_10 [4];

  FUN_00339f50(param_1,param_3);
  if (((*(uint *)(DAT_00384680 + 0x10) & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_00384684), iVar3 != 0)) {
    FUN_00350820(DAT_00384688,DAT_0038468c,0x28,0x20);
  }
  puVar1 = DAT_00384690;
  *DAT_00384690 = (short)(int)*param_3;
  puVar1[1] = (short)(int)param_3[1];
  uVar2 = DAT_00384694;
  puVar1[2] = (short)(int)param_3[2];
  *(undefined4 *)(puVar1 + 0x28a) = 5;
  *(undefined4 *)(puVar1 + 0x28c) = 5;
  *(undefined1 *)(puVar1 + 0x28e) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x51d) = 0xff;
  *(undefined1 *)(puVar1 + 0x28f) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x51f) = 0xff;
  *(undefined1 *)(puVar1 + 0x290) = 100;
  *(undefined1 *)((int)puVar1 + 0x521) = 100;
  *(undefined1 *)(puVar1 + 0x291) = 100;
  *(undefined1 *)((int)puVar1 + 0x523) = 100;
  *(undefined1 *)(puVar1 + 0x292) = 100;
  *(undefined1 *)((int)puVar1 + 0x525) = 100;
  *(undefined1 *)(puVar1 + 0x293) = 100;
  *(undefined1 *)((int)puVar1 + 0x527) = 100;
  *(undefined1 *)(puVar1 + 0x294) = 100;
  *(undefined1 *)((int)puVar1 + 0x529) = 100;
  *(undefined1 *)(puVar1 + 0x295) = 100;
  *(undefined1 *)((int)puVar1 + 0x52b) = 100;
  *(undefined1 *)(puVar1 + 0x296) = 0x32;
  *(undefined1 *)((int)puVar1 + 0x52d) = 0x32;
  *(undefined1 *)(puVar1 + 0x297) = 0x32;
  *(undefined1 *)((int)puVar1 + 0x52f) = 0x32;
  *(undefined1 *)(puVar1 + 0x298) = 0x32;
  *(undefined1 *)((int)puVar1 + 0x531) = 0x32;
  *(undefined1 *)(puVar1 + 0x299) = 0x32;
  *(undefined1 *)((int)puVar1 + 0x533) = 0x32;
  *(undefined1 *)(puVar1 + 0x29a) = 0x32;
  *(undefined1 *)((int)puVar1 + 0x535) = 0x32;
  *(undefined1 *)(puVar1 + 0x29b) = 0x32;
  *(undefined1 *)((int)puVar1 + 0x537) = 0x32;
  *(undefined1 *)(puVar1 + 0x29c) = 0;
  *(undefined1 *)((int)puVar1 + 0x539) = 0;
  *(undefined1 *)(puVar1 + 0x29d) = 0;
  *(undefined1 *)((int)puVar1 + 0x53b) = 0;
  *(undefined4 *)(puVar1 + 0x29e) = 0;
  *(undefined4 *)(puVar1 + 0x2a0) = 0x10;
  *(undefined4 *)(puVar1 + 0x286) = uVar2;
  *(undefined4 *)(puVar1 + 0x288) = DAT_00384698;
  FUN_00350660(param_1,auStack_10,0,0,1,puVar1);
  return;
}
